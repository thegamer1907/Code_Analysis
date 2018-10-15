#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define fi first
#define sec second
typedef long long int  ll;
typedef long double  ld;
#define pii pair<ll,ll> 
#define pic pair<ll,char>
#define vi vector< ll > 
#define vvi vector< vi > 
#define vpi vector< pii a> 
#define vvpi vector< vpi > 
#define st  set <ll, greater <ll> >
#define mst  multiset <ll, greater <ll> >
#define in insert
#define sz size
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mapp  unordered_map <ll, ll>
#define ppii pair< pii, pii > 
#define que queue< ll > 
#define deq queue< ll >
#define mpit unordered_map<ll, ll> :: iterator
#define mpins(x,y) insert(pair <ll, ll> (x, y))
#define test(t) ll t;cin>>t;while(t--)
#define inarr(n) ll arr[n];for(ll i=0;i<n;i++)cin>>arr[i];
#define ingra(m) vvi arr(100005);for(ll i=0;i<m;i++){ll u,v;cin>>u>>v;arr[u].pb(v);arr[v].pb(u);}
#define mem(a,b) memset(a,b,sizeof(a))
ll arr[1000000];
ll n,k;
bool check(ll x)
{
	ll cnt = 0,i;
	for(i=0;i<x;i++)
	{
		if(arr[i]==0)
			cnt++;
	}
	if(cnt<=k)
		return true;
	for(i=x;i<n;i++)
	{
		if(arr[i-x]==0)
			cnt--;
		if(arr[i]==0)
			cnt++;
		if(cnt<=k)
			return true;
	}
	return false;
}
int main()
{
	fast;
	ll i;
	cin>>n>>k;
	for(i=0;i<n;i++)
		cin>>arr[i];
	ll low = k;
	ll high = n;
	ll ans;
	while(low<=high)
	{
		ll mid=(low+high)/2;
		if(check(mid))
		{
			ans = mid;
			low=mid+1;
		}
		else
			high = mid-1;
	}
	ll cnt = 0;
	for(i=0;i<ans;i++)
	{
		if(arr[i]==0)
			cnt++;
	}
	if(cnt<=k)
	{
		for(i=0;i<ans;i++)
			arr[i]=1;
	}
	else
	{
		for(i=ans;i<n;i++)
		{
			if(arr[i-ans]==0)
				cnt--;
			if(arr[i]==0)
				cnt++;
			if(cnt<=k)
			{
				for(ll j = i-ans+1;j<=i;j++)
					arr[j]=1;
				break;
			}
		}
	}
	cout<<ans<<"\n";
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";

}


