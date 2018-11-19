#include<cstdio>
#include<cstring>
using namespace std;
char s[3],c[3];
int main(){
	int a=0,b=0,f=0,n;
	scanf("%s%d",s,&n);
	for(int i=1;i<=n;i++){
		scanf("%s",c);
		if(c[0]==s[1])a=1;
		if(c[1]==s[0])b=1;
		if(strcmp(c,s)==0)f=1;
		if(f==0)f=a*b;
	}
	if(f==0)printf("NO");
	else printf("YES");
	return 0;
}