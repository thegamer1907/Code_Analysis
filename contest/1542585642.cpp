#include<stdio.h>
int main(){
	char a,b;
	scanf("%c%c",&a,&b);
	int n;
	scanf("%d",&n);
	int fa=0,fb=0;
	char t1,t2;
	while(n--){
		getchar();
		scanf("%c%c",&t1,&t2);
		if((a==t2&&b==t1)||(a==t1&&b==t2)){
			printf("YES\n");
			return 0;
		}
		if(t1==b) fb=1;
		if(t2==a) fa=1;
	}
	if(fb==1&&fa==1){
		printf("YES\n");
	}
	else printf("NO\n");
}
