#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  void run(istream &in, ostream &out) {
    int n, m;
    in >> n >> m;
    vector<bool> canBeRoot(n, true);
    while (m-->0) {
      int u, v;
      in >> u >> v;
      canBeRoot[u - 1] = false;
      canBeRoot[v - 1] = false;
    }
    int root = -1;
    for (int i = 0; i < n; ++i) {
      if (canBeRoot[i]) {
        root = i;
        break;
      }
    }
    out << n - 1 << '\n';
    for (int i = 0; i < n; ++i) {
      if (i != root) {
        out << root + 1 << ' ' << i + 1 << '\n';
      }
    }
  }
};

int main() {
#ifdef Submariner
  freopen("input.txt", "r", stdin);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  Solution().run(cin, cout);
#ifdef Submariner
  cout << "\nExecution Time: " << (double) clock() / CLOCKS_PER_SEC << "s\n"; 
#endif
}