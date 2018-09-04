#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second

typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int a[n];
  pair<int, int> ans = {1e9 + 10, -1};
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    int cur = i;
    a[i] -= i;
    if (a[i] <= 0)
      ans = min(ans, {cur, i});
    else {
      int need = (a[i] + n - 1) / n;
      ans = min(ans, {cur + need * n, i});
    }
  }
  cout << ans.se + 1;
  return 0;
}
