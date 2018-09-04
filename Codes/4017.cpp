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
#define N 10000000

int main()
{
  
  fast;
  ll m,n;
  cin>>n>>m;
  ll dp[n+1];
  ll arr[n+1][m+1];
  ll i,j;
  for(i=1;i<=n;i++)
  {dp[i]=i;
    for(j=1;j<=m;j++)
      cin>>arr[i][j];
  }
  for(i=1;i<=m;i++)
  {
    ll temp[n+1];
    for(j=1;j<=n;j++)
      temp[j]=j;
    for(j=2;j<=n;j++)
    {
      if(arr[j][i]>=arr[j-1][i])
        temp[j]=temp[j-1];
    }
    for(j=2;j<=n;j++)
      dp[j]=min(dp[j],temp[j]);
  }
  ll k;
  cin>>k;
  while(k--)
  {
    ll l,r;
    cin>>l>>r;
    // cout<<dp[r];
    if(dp[r]<=l)
      cout<<"Yes\n";
    else
      cout<<"No\n";
  }
}