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
ll least[10000001];
int dp[10000001];
int main()
{
  
  fast;
  ll i,j;
  for(i=1;i<=N;i++)
  {
    least[i]=i;
  }
  for(i=2;i<=N;i++)
  {
    if(least[i]==i)
    {
      for(j=2*i;j<=N;j+=i)
      {
        least[j]=min(least[j],i);
      }
    }
  }
  ll n;
  cin>>n;
  for(i=0;i<n;i++)
  {
    ll x;
    cin>>x;
    while(x>1)
    {
      dp[least[x]]++;
      ll t=least[x];
      while(x%t==0)
        x/=t;
    }
  }
  dp[0]=0;
  dp[1]=0;
  for(i=3;i<=N;i++)
    dp[i]+=dp[i-1];
  ll q;
  cin>>q;
  while(q--)
  {
    ll l,r;
    cin>>l>>r;
    if(l>N)
      cout<<0<<"\n";
    else
      cout<<dp[min(r,ll(N))]-dp[l-1]<<"\n";
  }
}


 
