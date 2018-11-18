#include <stdio.h>

int main(){
	int res = 0;
	int f1 = 0,f2 = 0;
	int n, i;
	char p1,p2;
	scanf("%c%c",&p1,&p2);
	scanf("%d%*c",&n);
	for(i = 0;i<n;i++){
		char c1,c2;
		scanf("%c%c%*c",&c1,&c2);
		if(c1 == p1 && c2 == p2){
			res = 1;
			break;
		}else{
			if(c1 == p2) f2 = 1;
			if(c2 == p1) f1 = 1;
			if(f2 && f1){
				res = 1;
				break;
			}
		}
	}
	if(res) printf("YES\n");
	else printf("NO\n");
	return 0;
}