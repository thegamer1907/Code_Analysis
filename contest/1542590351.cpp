#include<stdio.h>
int main(){
	int n,i,t1=0,t2=0;
	char x,y;
	scanf("%c %c",&x,&y);
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		char xx,yy;
		scanf(" %c %c",&xx,&yy);
		if(xx==x && yy==y) {printf("YES"); return 0;}
		if(yy==x) t1=1;
		if(xx==y) t2=1;
	}
	if(t1==1 && t2==1) printf("YES"); else printf("NO");
	return 0;
}