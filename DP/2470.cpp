/* ****TCIITB**** */

#include<bits/stdc++.h>
#define io          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
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
	
	io
	ll t,k;
	cin>>t>>k;
	ll dp[N];
	dp[0]=1;
	rep(i,1,N)
	{
		dp[i]=dp[i-1]%hell;
		if(i>=k)
		{
			dp[i]=(dp[i-1]%hell+dp[i-k]%hell)%hell;
		}
	}
	ll psum[N]={0};
	rep(i,1,N)
	{
		psum[i]=(psum[i-1]%hell+dp[i]%hell)%hell;
	}
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		cout<<(psum[b]-psum[a-1]+hell)%hell<<endl;
	}
}