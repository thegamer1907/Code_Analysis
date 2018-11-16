#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define vvl vector<vll>
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define vpi vector<pii>
#define vpl vector<pll>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define rep(i,n) for(ll i=0;i<n;i++)
#define repA(i,a,n) for(ll i=a;i<=n;i++)
#define repD(i,a,n) for(ll i=a;i>=n;i--)
ll gcd(ll a, ll b) {return (b ? gcd(b,a%b):a); }
ll lcm (ll a, ll b) {return a/gcd(a,b) * b; }
ll inf = 1e9+7;
vvl g(2001);
ll dfs(ll u){
  if(g[u].size()==0) return 1;
  return 1+dfs(g[u][0]);
}
int main(){
  std::ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cout.precision(15);
  ll n;
  cin>>n;

  repA(i,1,n){
    ll x;
    cin>>x;
    if(x==-1) continue;
    g[i].pb(x);
  }
  ll ans=0;
  repA(i,1,n){
    ll te = dfs(i);
    if(te>ans) ans=te;
  }
  cout<<ans;
}
