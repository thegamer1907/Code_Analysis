#include<stdio.h>
int a[205];
int main(void)
{
	int n, i, x;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%d", &x);
		a[x] = i;
	}
	for(i=1;i<=n;i++)
		printf("%d ", a[i]);
	puts("");
	return 0;
}