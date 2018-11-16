#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;

const ll N = 20000;

ll dijkstra(ll a, ll b) {
  set<ll> visited;
  priority_queue<ii, vii, greater<ii>> pq;
  pq.push(ii(0, a));
  while(!pq.empty()) {
    auto aux = pq.top();
    pq.pop();
    if(!visited.count(aux.second)) {
      visited.insert(aux.second);
      if(aux.second == b) return aux.first;
      pq.push(ii(aux.first+1, aux.second-1));
      if(aux.second*2 < N) pq.push(ii(aux.first+1, aux.second*2));
    }
  }
  return N;
}

int main() {
  int n, m;
  cin >> n >> m;
  cout << dijkstra(n, m) << endl;
  return 0;
}
