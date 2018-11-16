#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
#else
#define eprintf(...) 42
#endif

template <typename T>
class edmonds_karp {
 public:
  int n;
  int st, fin;
  vector<vector<int>> g;
  vector<vector<T>> cap;
  
  edmonds_karp(int _n, int _st, int _fin) : n(_n), st(_st), fin(_fin) {
    g.resize(n);
    cap.resize(n);
    for (int i = 0; i < n; ++i) {
      cap[i].resize(n);
    }
  }
  
  inline void add_edge(int from, int to, T c = 1) {
    g[from].push_back(to);
    g[to].push_back(from);
    cap[from][to] = c;
  }
  
  T expath(vector<int>& pr) {
    pr.assign(n, -1);
    queue<pair<int, T>> qu;
    qu.emplace(st, numeric_limits<T>::max());
    while (!qu.empty()) {
      int v;
      T flow;
      tie(v, flow) = qu.front();
      qu.pop();
      for (int to : g[v]) {
        if (pr[to] == -1 && to != st && cap[v][to] > 0) {
          pr[to] = v;
          int new_flow = min(flow, cap[v][to]);
          if (to == fin) {
            return new_flow;
          }
          qu.emplace(to, new_flow);
        }
      }
    }
    return 0;
  }
  
  T max_flow() {
    T flow = 0;
    while (true) {
      vector<int> pr;
      T augment = expath(pr);
      if (augment == 0) {
        break;
      }
      flow += augment;
      for (int v = fin; v != st; v = pr[v]) {
        int u = pr[v];
        cap[u][v] -= augment;
        cap[v][u] += augment;
      }
    }
    return flow;
  }
};

int main() {
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int n;
  scanf("%d", &n);
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  int m;
  scanf("%d", &m);
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    scanf("%d", &b[i]);
  }
  edmonds_karp<int> g(n + m + 2, 0, n + m + 1);
  for (int i = 0; i < n; ++i) {
    g.add_edge(0, i + 1);
  }
  for (int i = 0; i < m; ++i) {
    g.add_edge(n + i + 1, n + m + 1);
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (abs(a[i] - b[j]) <= 1) {
        g.add_edge(i + 1, n + j + 1);
      }
    }
  }
  printf("%d\n", g.max_flow());
  return 0;
}

