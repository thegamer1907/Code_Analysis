#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int dp[3005][5], a[3005], b[3005];
int main(void)
{
	int n, i, j, k, ans;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		scanf("%d", &a[i]);
	for(i=1;i<=n;i++)
		scanf("%d", &b[i]);
	ans = 2147483647;
	memset(dp, 62, sizeof(dp));
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1)
				dp[j][1] = b[j];
			else
			{
				for(k=1;k<=j-1;k++)
				{
					if(a[k]<a[j])
						dp[j][i] = min(dp[j][i], dp[k][i-1]+b[j]);
				}
			}
		}
	}
	for(i=1;i<=n;i++)
		ans = min(ans, dp[i][3]);
	if(ans<=300000001)
		printf("%d\n", ans);
	else
		printf("-1\n");
	return 0;
}