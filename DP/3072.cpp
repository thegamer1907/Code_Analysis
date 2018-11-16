#include<bits/stdc++.h>
using namespace std;

const int MAXN=3030;
int s[MAXN],c[MAXN],dp[MAXN][4];

int main()
{
	int n,i,j,ans;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&s[i]);
	for(i=1;i<=n;i++)
		scanf("%d",&c[i]);
	memset(dp,-1,sizeof(dp));
	ans=1<<30;
	for(i=1;i<=n;i++)
	{
		dp[i][1]=c[i];
		for(j=1;j<i;j++)
		{
			if(dp[j][1]!=-1 && s[j]<s[i])
			{
				if(dp[i][2]==-1)
					dp[i][2]=dp[j][1]+c[i];
				else
					dp[i][2]=min(dp[i][2],dp[j][1]+c[i]);
			}
		}
		for(j=1;j<i;j++)
		{
			if(dp[j][2]!=-1 && s[j]<s[i])
			{
				if(dp[i][3]==-1)
					dp[i][3]=dp[j][2]+c[i];
				else
					dp[i][3]=min(dp[i][3],dp[j][2]+c[i]);
			}
		}
		if(dp[i][3]!=-1)
			ans=min(ans,dp[i][3]);
	}
	if(ans==(1<<30))
		printf("-1\n");
	else
		printf("%d\n",ans);
}
