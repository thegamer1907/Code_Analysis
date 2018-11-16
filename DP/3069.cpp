#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0);
  int n; cin >> n;
  const LL INF = 1e18;
  vector<LL> A(n), C(n);
  for (int i = 0; i < n; ++i) cin >> A[i];
  for (int i = 0; i < n; ++i) cin >> C[i];
  LL ans = INF;
  for (int j = 1; j < n - 1; ++j) {
    LL cur = C[j], found = INF;
    for (int i = 0; i < j; ++i) if (A[i] < A[j]) found = min(found, C[i]);
    if (found == INF) continue;
    cur += found, found = INF;
    for (int i = j + 1; i < n; ++i) if (A[i] > A[j]) found = min(found, C[i]);
    if (found == INF) continue;
    cur += found;
    ans = min(ans, cur);
  }
  cout << (ans == INF? -1: ans) << endl;
}