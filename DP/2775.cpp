#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
using namespace std;
#define ll long long
int d[15], ans[55];
int main()
{
	int n, i, j, k, sum = 0;
	scanf("%d", &n);
	while (n)
	{
		int x = n, cnt = 0, now = 0;
		while (x)
			d[++cnt] = x % 10, x /= 10;
		for (i = cnt;i >= 1;i--)
		{
			if (d[i] >= 1)
				now = now * 10 + 1;
			else now = now * 10;
		}
		n -= now;
		ans[++sum] = now;
	}
	printf("%d\n", sum);
	for (i = 1;i <= sum;i++)
		printf("%d ", ans[i]);
	printf("\n");
	return 0;
}