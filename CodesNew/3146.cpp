#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n, k;
int A[300000];
int main() {
  ios_base::sync_with_stdio(false); cin.tie(0);
  cin >> n >> k;
  for (int i = 0; i < n; ++i) cin >> A[i];
  int ans = 0, l = 0, r = 0, used = 0;
  for (int i = 0, j = 0; i < n; ++i) {
    while (j < n and (A[j] == 1 or used < k)) used += A[j] == 0, ++j;
    if (ans < j - i) ans = max(j - i, ans), l = i, r = j;
    used -= A[i] == 0;
  }
  cout << ans << '\n', fill(A + l, A + r, 1);
  for (int i = 0; i < n; ++i) cout << A[i] << " \n"[i == n - 1];
}
