#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int n;
char s1[5],s2[5];
bool a,b1,b2;

int main(){
	scanf("%s",s1);
	scanf("%d",&n);
	a = b1 = b2 = false;
	for(int i=1; i<=n; ++i){
		scanf("%s",s2);
		if(s2[0]==s1[0] && s2[1]==s1[1]) a=true;
		if(s2[0]==s1[1] && s2[1]==s1[0]) a=true;
		if(s2[0]==s1[1]) b1=true;
		if(s2[1]==s1[0]) b2=true;
	}
	if(a || (b1&&b2)) printf("YES");
	else printf("NO");
	return 0;
} 
