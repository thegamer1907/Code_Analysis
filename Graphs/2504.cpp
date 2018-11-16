#include <bits/stdc++.h>

using namespace std;

typedef int64_t li;
typedef pair<li, li> pll;
#define all(x) x.begin(), x.end()
#define sz(x) x.size()

template <class T>
inline void in(T &a) {
      cin >> a;
}

template <class... Args>
inline void out(Args... args) {}

template <class Head, class... Args>
inline void out(Head head, Args... args) {
      cout << head;
      out(args...);
}

int const N = 1e4 + 20;

struct Tree {
      vector <int> sons;
} A[N];


int need[N];

int sol;

void dfs(int u, int p) {
      for (int v : A[u].sons) {
            if (need[u] != need[v] && p!=v) {
                  sol++;
                  dfs(v, u);
            }
            else if (p != v) {
                  dfs(v, u);
            }
      }
}

int main() {
      int n; in(n);
      for (int i = 1; i <= n - 1; ++i) {
            int x; in(x);
            if (i > 0) {
                  A[i + 1].sons.push_back(x);
                  A[x].sons.push_back(i + 1);
            }
      }
      for (int i = 1; i <= n; ++i) {
            in(need[i]);
      }
      dfs(1, -1);
      out(sol + 1, '\n');
      return 0;
}