
#include<stdio.h>
int main()
{
	int i, j, k, n, a[51];
	scanf("%d %d", &n, &k);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	j=0;
	
	for(i=1;i<=n;i++)
	{
		if(a[i]>=a[k]&&a[i]>0)
		j++;
		
	}
	
	printf("%d", j);
	
	
	return 0;
}