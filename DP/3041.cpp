#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<map>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
ll dp[2][4];
int main()
{
	int n, i, j, k, sum;
	dp[0][3] = 1;
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		dp[1][0] = (dp[0][1] + dp[0][2] + dp[0][3]) % mod;
		dp[1][1] = (dp[0][0] + dp[0][2] + dp[0][3]) % mod;
		dp[1][2] = (dp[0][0] + dp[0][1] + dp[0][3]) % mod;
		dp[1][3] = (dp[0][0] + dp[0][1] + dp[0][2]) % mod;
		for (j = 0;j <= 3;j++)
			dp[0][j] = dp[1][j], dp[1][j] = 0;
	}
	printf("%lld\n", dp[0][3]);
	return 0;
}