#include<bits/stdc++.h>
#include<time.h>
#include<stdlib.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse4")
#define pb push_back
#define mp make_pair
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define pll pair<ll,ll>
#define vll vector<ll,ll>
#define all(a) (a).begin(),(a).end()
#define ff first
#define ss second
#define sz(x) (ll)x.size()
#define hell 1000000007
#define repf(i,a,b) for(ll i=a;i<b;i++)
#define repb(i,a,b) for(ll i=a;i>b;i--)
#define lbnd lower_bound
#define ubnd upper_bound
#define bs binary_search
#define gcd(a,b) __gcd((a),(b))
#define EPS 1e-12
#define lcm(a,b) ((a)*(b))/__gcd((a),(b))
using namespace std;


int32_t main()
{
	ll n,k;
	cin>>n>>k;
	ll tot=240;
	tot-=k;
	tot*=40;
	tot+=25;
	double x=sqrt(tot);
	x-=5;
	x/=10.0;
	cout<<min((ll)x,n);	

	return 0;
}
