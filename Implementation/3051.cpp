#include<stdio.h>
int main(void)
{
	int n, m, ans, i;
	scanf("%d%d", &n, &m);
	ans = 1;
	for(i=1;i<=n&&i<=m;i++)
		ans = ans*i;
	printf("%d\n", ans);
	return 0;
}