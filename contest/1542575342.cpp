#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <set>
#include <cstring>
#define N 202
#define M 202
#define LEN 202
#define LIMIT 21
using namespace std;
int n,m;
int limit;
char str[N][LEN];
struct my_str{
	int prefix,suffix;
	int len;
	set<int> s[LIMIT];
	my_str(){
		prefix = suffix = len = 0;
		for(int i=0;i<=limit;i++)s[i].clear();
	}
	void debug(){
		printf("%d %d %d\n",prefix,suffix,len);
		for(int i=0;i<=limit;i++){
			printf("%dth\n",i);
			for(set<int>::iterator it = s[i].begin();it != s[i].end();it++)printf("%d ",*it);
			printf("\n");
		}
	}
}str_info[N + M];
void merge(my_str& ret,my_str a,my_str b){
	//printf("LEN %d %d\n",a.len,b.len);
	ret.len = min(limit,a.len + b.len);
	//printf("NOW %d\n",ret.len);
	if(a.len >= limit)ret.prefix = a.prefix;
	else if(a.len + b.len >= limit)ret.prefix = (a.prefix << (limit - a.len)) | (b.prefix >> (b.len + a.len - limit));
	else ret.prefix = (a.prefix << b.len) | b.prefix;
	if(b.len >= limit)ret.suffix = b.suffix;
	else ret.suffix = ((a.suffix ^ ((a.suffix >> (limit - b.len)) << (limit - b.len))) << b.len) | b.suffix;
	for(int i=1;i<=a.len;i++){
		for(int j=1;j<=b.len && i + j <= limit;j++){
			int new_num1 = a.suffix ^ ((a.suffix >> i) << i);
			int new_num2 = b.prefix >> (b.len - j);
			//printf("GET %d %d %d %d %d\n",i,j,new_num1,new_num2,(new_num1 << j) | new_num2);
			ret.s[i + j].insert((new_num1 << j) | new_num2);
		}
	}
	for(int i=0;i<=limit;i++){
		for(set<int>::iterator it = a.s[i].begin();it != a.s[i].end();it++)ret.s[i].insert(*it);
		for(set<int>::iterator it = b.s[i].begin();it != b.s[i].end();it++)ret.s[i].insert(*it);
	}
	//ret.debug();
}
int get_num(my_str& a){
	int ret = 0;
	////for(int i=0;i<=limit;i++)printf("%d ",a.s[i].size());
	//printf("\n");
	for(int i=0;i<=limit;i++){
		if(a.s[i].size() == (1 << i))ret = i;
	}
	return ret;
}
void get_my_str(my_str& a,char first_str[LEN]){
	a.len = min((int)strlen(first_str),limit);
	a.prefix = 0;
	for(int i=0;i<limit && first_str[i];i++){
		a.prefix <<= 1;
		if(first_str[i] == '1')a.prefix |= 1;
	}
	a.suffix = 0;
	for(int i=strlen(first_str) - 1;i >= 0 && strlen(first_str) - i <= limit;i--){
		if(first_str[i] == '1')a.suffix |= (1 << (strlen(first_str) - 1 - i));
	}
	//printf("NOW %d %d\n",a.prefix,a.suffix);
	for(int i=0;first_str[i];i++){
		int now = 0;
		for(int j=i;first_str[j] && j - i < limit;j++){
			now <<= 1;
			if(first_str[j] == '1')now |= 1;
			a.s[j - i + 1].insert(now);
		}
	}
	//a.debug();
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%s",str[i]);
	scanf("%d",&m);
	for(int j=1;(1 << j) <= m * j;limit = (j++));
	//printf("LIMIT %d\n",limit);
	for(int i=1;i<=n;i++)get_my_str(str_info[i],str[i]);
	for(int i=1;i<=m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		merge(str_info[n + i],str_info[a],str_info[b]);
		printf("%d\n",get_num(str_info[n + i]));
	}
	return 0;
}