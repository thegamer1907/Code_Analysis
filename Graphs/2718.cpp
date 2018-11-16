#include <bits/stdc++.h>
//#define ll long long
using namespace std;
typedef long long ll;
const ll OO = 1e18;
// WATCH OUT FOR LONG LONG
const int N = 100001;
vector<pair<int, ll>> adj[N];
ll dist[N];
int par[N];
ll dijkstra(int s, int d = -1){
  set<pair<ll, int>> q; // weight, node
  dist[s] = 0;
  q.insert({s, 0});

  while(q.size()){
    pair<ll, int> tp = *q.begin();
    q.erase(q.begin());
    if(tp.first != dist[tp.second])continue; // visited this node before
    if(tp.second == d)
      return tp.first;
    for(auto el : adj[tp.second]){
      if(tp.first + el.second < dist[el.first]){
        dist[el.first] = tp.first + el.second;
        par[el.first] = tp.second;
        q.insert({dist[el.first], el.first});
      }
    }
  }
  return -1;
}
void init(int n, int m){
  for(int i = 0;i < n;i++)
    adj[i].clear(), dist[i] = OO;
}
int main(int argc, char** argv) {
//  freopen("in.txt", "r", stdin);
//  freopen("out.txt", "w", stdout);
  int n, m;
  cin >> n >> m;
  init(n, m);
  int u, v, w;
  for(int i = 0;i < m;i++){
    scanf("%d %d %d", &u, &v, &w);
    u--, v--;
    adj[u].push_back({v, w});
    adj[v].push_back({u, w});
  }
  ll d = dijkstra(0, n - 1);

//  cout << d << endl;
  if(d == -1){
    cout << -1;
    return 0;
  }
  vector<int> pth = {n};
  int p = n - 1;
  while(p != 0){
    p = par[p];
    pth.push_back(p + 1);
  }
  for(int i = pth.size() - 1;i >= 0;i--)
    cout << pth[i] << ' ';
  return 0;
}

