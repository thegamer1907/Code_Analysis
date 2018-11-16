#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n;
vector<int> V;
int ans[100001];
int main() {
  int n, a, m; scanf("%d%d", &n, &m);
  ans[n] = 1;
  for (int i = 0; i < n; ++i) scanf("%d", &a), V.push_back(a);
  set<int> S;
  for (int i = n; i; --i) S.insert(V.back()), V.pop_back(), ans[i] = S.size();
  for (int i = 0; i < m; ++i) scanf("%d", &a), printf("%d\n", ans[a]);
}
