#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int n;
  vector<vector<int>> adjList;
  vector<int> inDeg;
  vector<int> depth;

  void dfs(int u) {
    for (int v : adjList[u]) {
      depth[v] = depth[u] + 1;
      dfs(v);
    }
  }

  void run(istream &in, ostream &out) {
    in >> n;
    adjList.resize(n);
    inDeg.assign(n, 0);
    for (int i = 0; i < n; ++i) {
      int p;
      in >> p;
      if (p != -1) {
        adjList[p - 1].push_back(i);
        ++inDeg[i];
      }
    }
    depth.resize(n);
    for (int i = 0; i < n; ++i) {
      if (inDeg[i] == 0) {
        depth[i] = 0;
        dfs(i);
      }
    }
    out << *max_element(depth.begin(), depth.end()) + 1;
  }
};

int main() {
#ifdef Submariner
  freopen("input.txt", "r", stdin);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  Solution().run(cin, cout);
  cerr << "\nExecution Time: " << (double) clock() / CLOCKS_PER_SEC << "s\n"; 
}