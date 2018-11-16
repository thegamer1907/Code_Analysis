#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define INF 1000000007
#define mem(dp,a) memset(dp,a,sizeof dp)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repb(i,a,b) for(ll i=a;i>=b;i--)
#define f(n) for (ll i=0;i<n;i++)

int main()
{
	int n;scanf("%d",&n);
	int a[n];
	f(n)scanf("%d",&a[i]);
	int dp[n];mem(dp,0);
	int in=-1,m=-1,n1=0;
	f(n)
	{
		if(a[i]==0)
		{
			in=i;
			break;
		}
	}
	rep(i,in,n)
	{
		if(i==in)
			a[i]==0 ? dp[i]=1 : dp[i]=-1;
		else
			a[i]==0 ? dp[i]=dp[i-1]+1 : dp[i]=dp[i-1]-1;
		if(a[i]==0 && dp[i-1]<0)
			dp[i]=1;
		m=max(m,dp[i]);
	}
	f(n)
	if(a[i]==1)n1+=1;
	printf("%d",m+n1);

}
