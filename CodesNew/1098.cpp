/*input
68
*/
#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(it,a)   for(auto it=(a).begin();it!=(a).end();it++) 
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define inf        1000000007
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define repr(i,a,b) for(ll int i=a;i>b;i--)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define sum(v)      accumulate(v.begin(),v.end(),(ll)0)
map <long long int,long long int> ma;
set <long long int, greater <long long int> > s;

int solve()
{
	ll n;cin>>n;
	ll l=1,r=n;
	while(l<=r)
	{	
		ll mid  = (l+r)/2;
		ll ans=0;
		for(ll rem =n;rem>0;)
		{
			ll o = min(mid,rem);
			rem-=o;
			rem-=rem/10;
			ans+=o;
			if(2*ans>=n)
				break;
		}

		if(2*ans>=n)
			r=mid-1;
		else
			l=mid+1;
	}

	cout<<l;
	return 0;
	
}

int main()
{	
	ll t=1;
	//cin>>t;
	while(t--)
		solve();
}