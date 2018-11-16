#include <stdio.h>

int main(){
	
	int n, i;
	
	scanf("%d", &n);
	int num[n][3];

	for(i=0; i<n; i++){
		scanf("%d", &num[i][0]);
		scanf("%d", &num[i][1]);
		scanf("%d", &num[i][2]);
	}
	
	int X=0, Y=0, Z=0;
	
	for(i=0; i<n; i++){
		X += num[i][0];
		Y += num[i][1];
		Z += num[i][2];
	}
	
	if((X==0)&&(Y==0)&&(Z==0))	printf("YES");
	else						printf("NO");
	
	return 0;
}