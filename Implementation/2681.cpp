#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  vector<int> A(n), ans(n);
  for (int i = 0; i < n; ++i) cin >> A[i], --A[i], ans[A[i]] = i;
  for (int i = 0; i < n; ++i) cout << ans[i] + 1 << " \n"[i == n - 1];
}
