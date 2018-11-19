#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
#define LL long long
using namespace std; 

char s[10],t[10];
bool c1,c2;
int main(){
	scanf("%s",s);
	int n;scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s",t);
		if(t[0]==s[0]&&t[1]==s[1])c1=c2=true;
		if(t[0]==s[1])c2=true;
		if(t[1]==s[0])c1=true;
	}
	if(c1&c2)printf("YES");
	else printf("NO");
}

