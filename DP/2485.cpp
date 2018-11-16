#include<iostream>
#include<vector>
#include<cmath>
#include<queue>
#include<map>
#include<algorithm>
#define ll long long
#define rep(i,a,b) for(int i = a;i < b;i++)
#define N 1000004
#define INF 1e9+7

using namespace std;

ll t,k,a,b,dp[N],sum[N],mod=1e9+7;

ll get_sum(ll x,ll y)
{
	if(x==0)
	{
		return sum[y];
	}
	
	return (sum[y]-sum[x-1]+2*mod)%mod;
}
int main()
{
    ios_base::sync_with_stdio(false);

    cin >> t >> k;
    
    dp[0] = 1;
    sum[0]=1;
    
    rep(i,1,N)
    {
    	dp[i] = dp[i-1];
    	
    	if(i>=k)
    	{
    		dp[i] = (dp[i]+dp[i-k])%mod;
    	}
    	sum[i] = (sum[i-1]+dp[i])%mod;
    }
    
    rep(i,0,t)
    {
    	cin >> a >> b;
        
        cout << get_sum(a,b)<<endl;
    }

    return 0;
}