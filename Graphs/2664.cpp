#include<stdio.h>
int a[100005];
int main(void)
{
	int n, j, m, k, i;
	scanf("%d%d%d", &n, &m, &k);
	for(i=k;i>=2;i--)
		a[i] = 2;
	a[1] = n*m-2*(k-1);
	printf("%d", a[k]);
	for(i=1;i<=n;i++)
	{
		if(i%2)
		{
			for(j=1;j<=m;j++)
			{
				if(a[k]==0 && k>=2)
					printf("\n%d", a[--k]);
				printf(" %d %d", i, j);
				a[k]--;
			}
		}
		else
		{
			for(j=m;j>=1;j--)
			{
				if(a[k]==0 && k>=2)
					printf("\n%d", a[--k]);
				printf(" %d %d", i, j);
				a[k]--;
			}
		}
	}
	puts("");
	return 0;
}