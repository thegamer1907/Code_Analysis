#include <stdio.h>
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(0);
  int n, k;
  std::cin >> n >> k;
  std::vector<int> a(n + 1), s(n + 1);
  for (int i = 1; i <= n; i++) {
    std::cin >> a[i];
    s[i] = a[i] + s[i - 1];
  }
  int left = 0, right = n, ans = 0, pos = 0;
  while (left <= right) {
    int mid = (left + right) / 2;
    bool can = false;
    for (int i = mid; i <= n; i++) {
      if (mid - (s[i] - s[i - mid]) <= k) {
        ans = mid;
        pos = i - mid + 1;
        can = true;
        break;
      }
    }
    if (can) left = mid + 1; else right = mid - 1;
  }
  std::cout << ans << std::endl;
  for (int i = 1; i <= n; i++) {
    if (i >= pos && k > 0 && a[i] == 0) a[i] = 1, k--;
    std::cout << a[i] << " ";
  }
}
