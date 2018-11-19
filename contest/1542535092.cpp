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
char st[5],s[200][6],a[30]; 
int n;
int main(){
	scanf("%s%d",st,&n);
	for (int i=1;i<=n;i++)scanf("%s",s[i]);
	for (int i=1;i<=n;i++)
	  for (int j=1;j<=n;j++){
	  	std::strcpy(a,s[i]);std::strcat(a,s[j]);
	  	if (strstr(a,st)){
	  		printf("YES\n");
	  		return 0;
	  	}
	  }
	printf("NO\n");
	return 0;
}