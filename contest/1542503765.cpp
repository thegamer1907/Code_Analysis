#include<bits/stdc++.h>
using namespace std;
int main(){
	int flag1=0;
	int flag2=0;
	char a,b;
	char ss[5];
	char s[110][5];
	int n,i,j;
	scanf("%s",ss);
	a=ss[0];
	b=ss[1];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%s",s[i]);
		if(s[i][0]==b)flag1=1;
	   if(s[i][1]==a)flag2=1;
	   if(s[i][0]==a&s[i][1]==b){
	   	flag1=1;
	   	flag2=1;
	   }
	}

	if(flag1==1&&flag2==1)printf("YES\n");
	else printf("NO\n");
	
}