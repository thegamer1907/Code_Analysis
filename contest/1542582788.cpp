#include<cstdio>
char s[10],s2[10];
int n;
bool fl1,fl2,fl3;
int main(){
	scanf("%s\n",s);
	scanf("%d\n",&n);
	for(int i=1;i<=n;++i){
		scanf("%s\n",s2);
		if(s2[1]==s[0])fl1=1;
		if(s2[0]==s[1])fl2=1;
		if(s2[0]==s[0]&&s2[1]==s[1])fl3=1;
	}
	if((fl1&&fl2)||fl3)printf("YES");
	else printf("NO");
	return 0;
}