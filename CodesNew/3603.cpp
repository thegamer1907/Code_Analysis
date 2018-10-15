#include <stdio.h>
int main()
{
	int a[105];
	int max, min,n,m,i,*p;
	scanf("%d", &n); getchar();
	scanf("%d", &m); getchar();
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	max = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i]>max) max = a[i];
	}
	max += m;//max
	while (m--)
	{
		min = a[0];
		p = &a[0];
		for (i = 1; i < n; i++)
		{
			if (min>a[i])
			{
				min = a[i];
				p = &a[i];
			}
		}
		(*p)++;
	}
	min = a[0];
	for (i = 1; i < n; i++)
	{
		if (min<a[i])
		{
			min = a[i];
		}
	}
	printf("%d %d\n", min, max);
//	getchar();getchar();
	return 0;
}