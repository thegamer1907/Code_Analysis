#include <bits/stdc++.h>

using namespace std;


int main() {
  #ifdef LOCAL
  freopen("sol.in", "r", stdin);
  freopen("sol.out", "w+", stdout);
  #endif
  int n;
  scanf("%d", &n);
  int ans = 0;
  int cur = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    scanf("%d %d", &a, &b);
    cur += b - a;
    ans = max(ans, cur);
  }
  printf("%d\n", ans);
  return 0;
}