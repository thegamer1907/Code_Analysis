#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long double
#define vi vector<int>
#define vll vector<ll>
#define vvl vector<vll>
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define vpi vector<pii>
#define vpl vector<pll>
#define rshuffle(x,y) unsigned seed = std::chrono::system_clock::now().time_since_epoch().count(); shuffle (x, y, std::default_random_engine(seed));
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

vector<set<ll> > graph(100001);
int main(){
  std::ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll n,m;
  cin>>n>>m;
  vll flg(100001,0);
  vll color(n+1);
  repA(i,1,n){
    cin>>color[i];
    flg[color[i]]=1;
  }
  rep(i,m){
    ll x,y;
    cin>>x>>y;
    ll u=color[x];
    ll v=color[y];
    if(u==v) continue;
    auto it=graph[u].find(v);
    if(it==graph[u].end()){
      graph[u].insert(v);
      graph[v].insert(u);
    }
  }
  ll ans=-1;
  ll mi=-1;
  repA(i,1,100000){
    if(flg[i]==1 && (ll)(graph[i].size())>ans){
      ans=graph[i].size();
      mi=i;
    }
    //ans=max(ans,(ll)(graph[i].size()));
  }
  cout<<mi;

}
