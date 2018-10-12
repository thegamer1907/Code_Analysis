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
#define hell        10000000007
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
using namespace std;

#define N  600006




int main()
{
	
	io
	ll n;
	cin>>n;
	std::vector<ll> a(n);
	rep(i,0,n)
	cin>>a[i];
	sort(all(a));
	ll ans=0;
	rep(i,0,n)
	ans+=a[i];
	ll z=(ans/(n-1));
	if((ans%(n-1))!=0)
		z++;
	cout<<max(z,a[n-1]);	

	
	

}