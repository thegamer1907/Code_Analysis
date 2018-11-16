#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<LL, LL> PLL;
pair<int, int> A[100000];
int main() {
  ios_base::sync_with_stdio(false); cin.tie(0);
  int pre = -1e9, x, h, n; cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> x >> h;
    A[i] = {x, h};
  }
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    tie(x, h) = A[i];
    if (pre <= x - h) pre = x + 1, ++ans;
    else if (i == n - 1) ++ans;
    else if (x + h < A[i + 1].first) ++ans, pre = x + h + 1;
    else pre = x + 1;
  }
  cout << ans << '\n';

}

