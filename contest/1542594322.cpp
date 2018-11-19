#include<cstdio>
int n;
char pwd[5],ka[105][5];
int main(){
	scanf("%s",pwd);
	scanf("%d",&n);
	bool f1=false,f2=false,f3=false;
	for(int i=1;i<=n;i++){
		scanf("%s",ka[i]);
		if(ka[i][0]==pwd[0]&&ka[i][1]==pwd[1]) f1=true;
		if(ka[i][0]==pwd[1]) f2=true;
		if(ka[i][1]==pwd[0]) f3=true;
	}
	if(f1||(f2&&f3)) printf("YES\n"); else printf("NO\n");
	return 0;
}
