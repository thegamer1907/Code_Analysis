#include<cstdio>
#include<algorithm>
using namespace std;
int n;
int a[100100];
int dp[100010];
int main()
{
	scanf("%d", &n);
	dp[1] = 1;
	int dap = 1;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 2; i <= n; i++)
	{
		if (a[i] > a[i - 1])
			dp[i] = dp[i - 1] + 1;
		else
			dp[i] = 1;
		dap = max(dp[i], dap);
	}
	printf("%d", dap);
}