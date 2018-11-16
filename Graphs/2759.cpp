#include<stdio.h>
int road[1005];
int main(void)
{
	int i, n, t, a, b;
	scanf("%d%d", &n, &t);
	while(t--)
	{
		scanf("%d%d", &a, &b);
		road[a] = 1;
		road[b] = 1;
	}
	for(i=1;i<=n;i++)
	{
		if(road[i]==0)
		{
			a = i;
			break;
		}
	}
	printf("%d\n", n-1);
	for(i=1;i<=n;i++)
	{
		if(i==a)
			continue;
		printf("%d %d\n", i, a);
	}
	return 0;
}