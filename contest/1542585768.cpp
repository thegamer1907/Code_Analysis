#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<queue>
#include<set>
#include<map>
#include<vector>
typedef long long int LL;
typedef unsigned long long ULL;
const int INF=0x3f3f3f3f;
const LL INFLL=0x3f3f3f3f3f3f3f3fll;
LL getint(){
	LL ret=0;bool f=0;char c;
	while((c=getchar())<'0'||c>'9')if(c=='-')f^=1;
	while(c>='0'&&c<='9'){ret=ret*10+c-'0';c=getchar();}
	return f?-ret:ret;
}
using namespace std;
const int MAXN=100000,MAXK=4;
bool num[(1<<MAXK)+10];
int main(){
	int n=getint(),k=getint();
	for(int i=1;i<=n;++i){
		int c=0;
		for(int j=1;j<=k;++j)
			c=c<<1|getint();
		num[c]=1;
	}
	if(num[0]){printf("YES\n");return 0;}
	int maxb=1<<k;
	for(int i=0;i<maxb;++i)if(num[i])
		for(int j=i+1;j<maxb;++j)if(num[j]&&(i&j)==0){
			printf("YES\n");
			return 0;
		}
	printf("NO\n");
	return 0;
}

