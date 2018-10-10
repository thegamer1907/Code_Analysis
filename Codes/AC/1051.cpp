#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define ld double
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define pll pair <ll,ll>
#define nl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	ll n,d,i,ans=-1;
	cin>>n>>d;
	vector <pll> a;
	vector <ll> v;
	ll cum[n+2];
	for(i=0;i<n;i++)
	{
		ll x,y;
		cin>>x>>y;
		v.pb(x);
		a.pb(mp(x,y));
	}
	sort(v.begin(),v.end());
	sort(a.begin(),a.end());
	cum[0]=a[0].ss;
	for(i=1;i<n;i++)
		cum[i]=cum[i-1]+a[i].ss;
	for(i=0;i<n;i++)
	{
		vector <ll> :: iterator it=upper_bound(v.begin(),v.end(),v[i]+d-1);
		ll idx=int(it-v.begin());
		--idx;
		if(!i)
			ans=max(ans,cum[idx]);
		else
			ans=max(ans,cum[idx]-cum[i-1]);		
	}
	cout<<ans<<nl;
	return 0;
}