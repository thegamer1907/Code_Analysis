#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#define RG register
using namespace std;
inline int gi(){
	RG char ch=getchar();RG int x=0,q=0;
	while(ch<'0' || ch>'9') ch=='-'?q=1:0,ch=getchar();
	while(ch>='0' && ch<='9') x=x*10+ch-'0',ch=getchar();
	return q?(-x):x;
}
int a,b,sub[200],pre[200];
char s[10];
int main(){
	//freopen("1.in","r",stdin);
	//freopen("1.out","w",stdout);
	scanf("%s",s);
	a=s[0],b=s[1];
	int n=gi();
	for (int i=1; i<=n; ++i){
		scanf("%s",s);
		if (s[0]==a && s[1]==b){
			puts("YES"); return 0;
		}
		++pre[s[0]],++sub[s[1]];
	}
	if (sub[a] && pre[b]){
		puts("YES"); return 0;
	}
	puts("NO");
	return 0;
}
