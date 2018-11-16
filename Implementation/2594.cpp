#include<stdio.h>
int main(void)
{
	int n, i, m, ans, x;
	scanf("%d%d", &n, &m);
	ans = 0;
	for(i=1;i<=n;i++)
	{
		ans += 1;
		scanf("%d", &x);
		if(x>m)
			ans += 1;
	}
	printf("%d\n", ans);
	return 0;
}