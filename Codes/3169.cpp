#include <stdio.h>

int a[100005];
int b[100005];

int main(void){
	
	int n; scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", a+i);
		a[i] -= i;
		if(a[i] <= 0) b[i] = 0;
		else{
			b[i] = (a[i]-1) / n + 1;
		}
	}
	
	int minindex = -1, minvalue = 1987654321;
	for(int i=0; i<n; i++){
		//printf("a[i] - i = %d, b[i] = %d\n", a[i], b[i]);
		if(minvalue > b[i]){
			minindex = i;
			minvalue = b[i];
		}
	}
	printf("%d", minindex+1);
	
	return 0;
}