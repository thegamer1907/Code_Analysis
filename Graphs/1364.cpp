#include <stdio.h>
#include <string.h>	

int main()
{
	int k = 0;
	int m,n,a[30001] ={0};
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++){
		scanf("%d",&a[i]);
		if (k == 0){
			k = a[i];
		} else if(k == i){
			k += a[i];
		}
		if (n-1 == k){
			printf("YES");
			return 0;
		}
		if (k > n-1)break;
	}
	printf("NO");
	return 0;
}