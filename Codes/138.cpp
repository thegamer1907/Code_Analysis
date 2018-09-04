#include<stdio.h>
int  p[1000005];
int main(void)
{
	int n, i, j, x, now;
	scanf("%d", &n);
	now = 1;
	for(i=1;i<=n;i++)
	{
		scanf("%d", &x);
		for(j=now;j<=now+x-1;j++)
			p[j] = i;
		now += x;
	}
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%d", &x);
		printf("%d\n", p[x]);
	}
	return 0;
}