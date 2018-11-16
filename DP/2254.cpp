/********************************************************
 *    #####   #    #    ##     ####    #   #    ##      *
 *    #    #  #    #   #  #   #    #    # #    #  #     *
 *    #####   ######  #    #  #          #    #    #    *
 *    #    #  #    #  ######  #  ###     #    ######    *
 *    #    #  #    #  #    #  #    #     #    #    #    *
 *    #####   #    #  #    #   ####      #    #    #    *
 ********************************************************/

#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
using namespace std;

#define N  100005

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int TESTS=1;
//	cin>>TESTS;
	while(TESTS--)
	{
		ll int n,q;
		cin>>n>>q;
		ll int arr[n+1];
		for(ll int i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
		ll int dp[n+1];
		map<ll int,ll int> ma;
		dp[n]=1;
		ma[arr[n]]=1;
		for(ll int i=n-1;i>=1;i--)
		{
			if(ma[arr[i]]==1) dp[i]=dp[i+1];
			else dp[i]=dp[i+1]+1;
			ma[arr[i]]=1; 
		}
		while(q--)
		{
			ll int l;
			cin>>l;
			cout<<dp[l]<<endl;
		}
	}
	return 0;
}