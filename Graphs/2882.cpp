#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class S { public: S(int _n) : n(_n), e(n), I(n, -1), A(n, -1) {} void add_edge(int u, int v) { e[u].push_back(v); } vector<int> gA() { for (int v = 0; v < n; v++) if (I[v] == -1) D(v); return A; } void D(int x) { stack<pair<int, vector<int>::iterator>> r; r.emplace(x, e[x].begin()); while (!r.empty()) { int v = r.top().first; vector<int>::iterator& it = r.top().second; if (it == e[v].begin()) { I[v] = s.size(); b.push(I[v]); s.push(v); } while (it != e[v].end()) { int w = *it; ++it; if (I[w] == -1) { r.emplace(w, e[w].begin()); break; } else if (A[w] == -1) { while (I[w] < b.top()) b.pop(); } } if (r.top().first == v) { r.pop(); if (I[v] == b.top()) { b.pop(); while (I[v] < (int)s.size()) { A[s.top()] = v; s.pop(); } } } } } private: int n; vector<vector<int>> e; vector<int> I, A; stack<int> s, b; }; int main() { ios_base::sync_with_stdio(false); cin.tie(NULL); int n, m, u, v; cin >> n; vector<int> c(n); for (int i = 0; i < n; i++) cin >> c[i]; S l(n); cin >> m; for (int i = 0; i < m; i++) { cin >> u >> v; l.add_edge(u-1, v-1); } vector<int> A = l.gA(); vector<int> C(n, -1); vector<int> scc_min_num(n); for (int i = 0; i < n; i++) { int scc = A[i]; if (C[scc] == -1 || c[i] < C[scc]) { C[scc] = c[i]; scc_min_num[scc] = 1; } else if (c[i] == C[scc]) scc_min_num[scc]++; } long long M = 0; long long ways = 1; for (int i = 0; i < n; i++) { if (C[i] >= 0) { M += C[i]; ways = (ways * scc_min_num[i]) % 1000000007; } } cout << M << " " << ways << endl; return 0; }