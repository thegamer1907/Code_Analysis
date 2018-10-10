/*Template by hemnath_d(Enlightened by chamow)*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vec vector<ll>
#define pll pair<ll,ll>
#define fastread ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define fx first
#define sx second
#define inf 100000000000000
#define minf -100000000000000

int main()
{
    fastread;
    ll n,m,k,x,s;
    cin>>n>>m>>k>>x>>s;
    ll ans=n*x;
    vec brr(m),bcst(m);
    for(ll i=0;i<m;i++)cin>>brr[i];
    for(ll i=0;i<m;i++)cin>>bcst[i];
    vec crr(k),ccst(k);
	for(ll i=0;i<k;i++)cin>>crr[i];
	for(ll i=0;i<k;i++)cin>>ccst[i];
	ll pos=upper_bound(ccst.begin(),ccst.end(),s)-ccst.begin()-1;
	if(pos!=-1)
	{
		ll nn=n-crr[pos];
		ans=min(ans,nn*x);
	}
	for(ll i=0;i<m;i++)
	{
	  	if(bcst[i]<=s)
	    {
	  		ll ns=s-bcst[i];
	  		ll nx=brr[i];
	  		ll pos=upper_bound(ccst.begin(),ccst.end(),ns)-ccst.begin()-1;
	  		if(pos!=-1)
	  		{
	  			ll nn=n-crr[pos];
	  			ans=min(ans,nn*nx);
	  		}
	  		else
	  			ans=min(ans,n*nx);
	  	}
	}
	cout<<ans<<endl;
    return 0;
}