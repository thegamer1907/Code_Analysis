#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<int, ll> pil;
typedef pair<ll, int> pli;
typedef pair<ll, ll> pll;
typedef pair<db, db> pdd;

const int MOD = 1000000007;
const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const db PI = acos(-1);
const db EPS = 1e-10;
const int N = 2010;

int n;
vector<int> adjList[N];
int p[N];
vector<int> tree[N];
int treeDepth[N];
int depth[N];

int findTree(int u) {
  return p[u] == -1 ? u : p[u] = findTree(p[u]);
}

void dfs(int u, int label) {
  depth[u] = label;
  for (int v : adjList[u]) {
    dfs(v, label + 1);
  }
}

int main() {
  // freopen("task.inp", "r", stdin);
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> p[i];
    if (p[i] == -1) {
      continue;
    } else {
      --p[i];
    }
    adjList[p[i]].push_back(i);
  }
  for (int i = 0; i < n; ++i) {
    tree[findTree(i)].push_back(i);
  }
  for (int i = 0; i < n; ++i) {
    for (int j : tree[i]) {
      if (p[j] == -1) {
        dfs(j, 1);
      }
    }
    for (int j : tree[i]) {
      treeDepth[i] = max(treeDepth[i], depth[j]);
    }
  }
  cout << *max_element(treeDepth, treeDepth + n);
}