#include<stdio.h>
#define LL long long
#define mod 1000000007
LL dp[2][4];
int main(void)
{
	LL sum;
	int n, i, j, p;
	scanf("%d", &n);
	dp[p=1][0] = 1;
	for(i=1;i<=n;i++)
	{
		sum = dp[p][0]+dp[p][1]+dp[p][2]+dp[p][3];
		for(j=0;j<=3;j++)
			dp[p^1][j] = (sum-dp[p][j])%mod;
		p ^= 1;
	}
	printf("%lld\n", dp[p][0]);
	return 0;
}