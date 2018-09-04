#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define db double 
#define pll pair<ll,ll>
#define pdb pair<db,db>
#define clr(x) memset(x,0,sizeof(x))
const ll size=1e6+7;
const ll mod=1e9+7;
ll arr[size];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll n;cin>>n;
	for(ll i=0;i<n;i++)cin>>arr[i];
	vector<ll> sum;
	sum.pb(arr[0]);
	for(ll i=1;i<n;i++)sum.pb(sum[i-1]+arr[i]);
	ll m;cin>>m;
	while(m--)
	{
		ll x;cin>>x;
		ll ps=lower_bound(sum.begin(),sum.end(),x)-sum.begin();
		cout<<ps+1<<endl;
	}
}
