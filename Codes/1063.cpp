#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<LL, LL> PLL;
pair<int, int> A[100100];
int main() {
  ios_base::sync_with_stdio(false); cin.tie(0);
  int n, d;
  cin >> n >> d;
  for (int i = 0; i < n; ++i) cin >> A[i].first >> A[i].second;
  sort(A, A + n);
  LL col = 0, ans = 0;
  for (int i = 0, j = 0; i < n; ++i) {
    while (A[j].first < A[i].first + d and j < n) col += A[j].second, ++j;
    ans = max(ans, col);
    col -= A[i].second;
  }
  cout << ans << '\n';

}

