#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> A;

int main() {
  cin >> n;
  A.assign(n, 0);
  for (auto& a : A) cin >> a;

  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j <= n; j++) {
      vector<int> B(A);
      for (int k = i; k < j; k++) {
        B[k] = 1 - B[k];
      }
      ans = max(ans, (int)count(begin(B), end(B), 1));
    }
  }
  cout << ans << '\n';
}