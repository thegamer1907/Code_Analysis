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
#define inn freopen("input.txt", "r", stdin)
#define outt freopen("output.txt", "w", stdout)
int main()
{
  ll n,m,k,ans;
  cin>>n>>m>>k;
  ll high = n*m;
  
  ll low = 1;
  ll valid = k;
  while(low<=high)
  {
    ll mid = (low+high)/2;
    // cout<<mid;
    ll cnt = 0;
    ll cnt2=0;
    ll i;
    for(i=1;i<=n;i++)
    {
      cnt+=min((mid-1)/i,m);
      if(mid%i==0 and (mid-1)/i<m)
        cnt2++;
    }
    if(cnt<valid and cnt+cnt2>=valid)
    {
      // cout<<cnt<<"\n";
      ans=mid;
      break;
    }
    cnt+=cnt2;
    if(cnt>=k)
      high=mid-1;
    else
      low=mid+1;
  }
  cout<<ans;
}