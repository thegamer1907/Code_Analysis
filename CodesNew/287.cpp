#include <bits/stdc++.h>

using namespace std;

const int N = 100005;

int a[N];

int main() {
  int n, t;
  cin >> n >> t;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    a[i] += a[i - 1];
  }
  int ans = 0;
  for(int i = 1; i <= n; i++) {
    int cur = upper_bound(&a[i], a + n + 1, a[i - 1] + t) - &a[i];
    ans = max(ans, cur);
  }
  cout << ans;
  return 0;
}