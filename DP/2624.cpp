#include<stdio.h>
int main(void)
{
	int n, m, i;
	scanf("%d%d", &n, &m);
	for(i=0;n&&m;i++)
	{
		if(n==1 && m==1)
			break;
		if(n>=m)
			n -= 2, m += 1;
		else
			m -= 2, n += 1;
	}
	printf("%d\n", i);
	return 0;
}