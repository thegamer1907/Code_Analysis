#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
const int maxm = 5005;
#define ll long long
ll dp[maxm][maxm], s[maxm];
int a[maxm];
int main()
{
	int n, i, k, sum, j, m;
	scanf("%d%d%d", &n, &m, &k);
	for (i = 1;i <= n;i++)
	{
		scanf("%d", &a[i]);
		s[i] = s[i - 1] + a[i];
	}
	for (i = 0;i <= n;i++)
	{
		for (j = 0;j <= k;j++)
		{
			if (i + m <= n) dp[i + m][j + 1] = max(dp[i + m][j + 1], dp[i][j] + s[i + m] - s[i]);
			dp[i + 1][j] = max(dp[i][j], dp[i + 1][j]);
		}
	}
	printf("%lld\n", dp[n][k]);
	return 0;
}