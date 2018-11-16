#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define FORD(i,a,b) for(int i=(b);i>=(a);--i)
#define SIZE(c) ((int)(c).size())
#define ALL(c) (c).begin(), (c).end()
#define st first
#define nd second
#define pb push_back

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef vector<bool> vb;
typedef long long ll;

template <class T> void mini(T& a, const T& b){a=min(a,b);}
template <class T> void maxi(T& a, const T& b){a=max(a,b);}

void dfs(int u, const vvi& G, vb& vis, vi& out) {
  vis[u] = true;
  for(int v: G[u]) if(!vis[v]) dfs(v, G, vis, out);
  out.pb(u);
}

constexpr int MOD = 1000000007;

void solve(){
  int n;
  cin>>n;
  vi cost(n);
  vvi G(n), GR(n);
  REP(i,n) cin>>cost[i];
  int m;
  cin>>m;
  REP(i,m) {
    int a,b;
    cin>>a>>b;
    --a; --b;
    G[a].pb(b);
    GR[b].pb(a);
  }
  vi out;
  vb vis(n, false);
  REP(i,n) if(!vis[i]) dfs(i, GR, vis, out);
  reverse(ALL(out));
  vis.assign(n, false);
  vvi scc;
  for(int v: out) {
    if(!vis[v]) {
      scc.pb(vi());
      dfs(v, G, vis, scc.back());
    }
  }
  ll ans = 1;
  ll totalcost = 0;
  for(const auto& comp: scc) {
    int cnt=0, m=INT_MAX;
    for(int v: comp) {
      if(cost[v] < m) {
        cnt = 0;
        m = cost[v];
      }
      if(cost[v] == m) ++cnt;
    }
    totalcost += m;
    ans = ans*cnt%MOD;
  }
  cout<<totalcost<<' '<<ans<<'\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
