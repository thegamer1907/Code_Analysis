#include <iostream>
#include <vector>
using namespace std;

#define INF 1000000000
#define MAX_N 30001

#define pb push_back
#define mp make_pair

typedef pair<int, int> pii;
typedef vector<pii> vii;

int n, t, a;
vector<int> adj[MAX_N];
bool vis[MAX_N];

void dfs(int u) {
  vis[u] = true;

  for (int v: adj[u]) {
    if (!vis[v])
      dfs(v);
  } 
}

int main() {
  cin >> n >> t; 
  for (int i = 1; i <= n - 1; i++) {
    cin >> a;
    adj[i].pb(a + i);
  }

  dfs(1);

  cout << (vis[t] ? "YES" : "NO") << endl;
}


