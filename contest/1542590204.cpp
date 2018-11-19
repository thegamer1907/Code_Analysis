#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int maxn = 1e5+10;
int N,T;
char str[100],temp[100];
int vist_first[100],vist_second[100],flag;
int main(){
	scanf("%s",str);
	scanf("%d",&N);
	flag = 0;
	for(int i = 0; i < 30; i++){
		vist_first[i] = vist_second[i] = 0;
	}
	for(int i = 0; i < N; i++){
		scanf("%s",temp);
		if(strcmp(temp,str) == 0)
			flag = 1;
		vist_first[temp[1]-'a'] = 1;
		vist_second[temp[0]-'a'] = 1;
	}
	if(flag || (vist_first[str[0]-'a'] && vist_second[str[1]-'a']))
		puts("YES");
	else
		puts("NO");
	return 0;
}