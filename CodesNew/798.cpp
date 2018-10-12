/*
ID: Rec
PROG: test
LANG: C++
*/
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<queue>
#include<algorithm>
#include<stack>
char s1[1005][505],s2[1005][505];
int n,m,tog;
int main(){
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++)scanf("%s",s1[i]);
	for (int j=1;j<=m;j++)scanf("%s",s2[j]);
	tog=0;
	for (int i=1;i<=n;i++){
		int len=strlen(s1[i]);
		for (int j=1;j<=m;j++){
			int len1=strlen(s2[j]);
			if (len!=len1)continue;
			int  B=1;
			for (int k=0;k<len;k++)
			  if (s1[i][k]!=s2[j][k]){
			  	B=0;
			  	break;
			  }
			tog+=B;
		}
	}
	if (tog&1){
		n=n-tog+tog/2+1;
	    m=m-tog+tog/2;
	}else n-=tog+tog/2,m-=tog+tog/2;
	if (n>m)printf("YES");else printf("NO");
	
	return 0;
}