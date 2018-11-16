#include<stdio.h>
int a[100005], sum[100005], flag[100005];
int main(void)
{
	int n, m, i, x;
	scanf("%d%d", &n, &m);
	for(i=1;i<=n;i++)
		scanf("%d", &a[i]);
	for(i=n;i>=1;i--)
	{
		sum[i] = sum[i+1];
		flag[a[i]]++;
		if(flag[a[i]]==1)
			sum[i] += 1;
	}
	while(m--)
	{
		scanf("%d", &x);
		printf("%d\n", sum[x]);
	}
	return 0;
}