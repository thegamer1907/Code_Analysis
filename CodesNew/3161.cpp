#include "bits/stdc++.h"
#define int long long
using namespace std;
const int M=3e5+5;
int dp[M],a[M];
void solve()
{
	int x,n,k,ans=0;cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		dp[i]=dp[i-1]+(a[i]==0);
	}
	int i=1,j=1;
	pair<int,int> aa={0,0};
	while(j<=n)
	{
		if(dp[j]-dp[i-1]<=k)
		{
			if(ans<j-(i-1))
			{
			    ans=j-(i-1);
			    aa={i,j};
			}
			j++;
		}
		else
			i++;
	}
	cout<<ans<<"\n";
	for(int i=1;i<=n;i++)
	{
	    if(i>=aa.first && i<=aa.second)
	    cout<<"1 ";
	    else
	    cout<<a[i]<<" ";
	}
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
}