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
	ll n,q,i;
	cin>>n>>q;
	vector <ll> v;
	ll a[n+2],k[q+2],ans[n+2],ca[n+2];
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=q;i++)
		cin>>k[i];
	ca[0]=0;
	v.pb(ca[0]);
	for(i=1;i<=n;i++)
	{
		ca[i]=ca[i-1]+a[i];
		v.pb(ca[i]);
	}
	ll l=0;
	ll pidx=1,arrows=0;;
	ll xtra=0;
	for(i=1;i<=q;i++)
	{
		vector <ll> :: iterator it=upper_bound(v.begin(),v.end(),ca[l]+k[i]+xtra);
		if(it==v.end())
		{
			ans[i]=n;
			l=0;
			xtra=0;
			continue;
		}
		ll idx=int(it-v.begin());
		if(ca[idx-1]==ca[l]+k[i]+xtra)
		{
			// cout<<"i= "<<i<<nl;
			ans[i]=n+1-idx;
			l=idx-1;
			xtra=0;
		}
		else
		{
			xtra=(k[i]+ca[l]+xtra-ca[idx-1])	;
			ans[i]=n+1-idx;
			l=idx-1;
		}
		// cout<<i<<" "<<idx<<" "<<xtra<<" "<<*it<<nl;

	}
	for(i=1;i<=q;i++)
		cout<<ans[i]<<" ";
	cout<<nl;
	return 0;
}