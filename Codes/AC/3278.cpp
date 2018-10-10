#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  int mn = INT_MAX, ans = -1;
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    int y = x / n + (x % n > i);
    if (y < mn) {
      mn = y;
      ans = i + 1;
    }
  }
  printf("%d\n", ans);
  return 0;
}