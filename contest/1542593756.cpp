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
char s[5],a[5];
int main(){
	scanf("%s",s+1);
	int n=getint();
	bool f1=0,f2=0;
	for(int i=1;i<=n;++i){
		scanf("%s",a+1);
		if(a[1]==s[1]&&a[2]==s[2]){printf("YES\n");return 0;}
		f1|=a[1]==s[2];
		f2|=a[2]==s[1];
	}
	if(f1&&f2)printf("YES\n");
	else printf("NO\n");
	return 0;
}

