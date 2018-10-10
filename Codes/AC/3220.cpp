#include <bits/stdc++.h>

using namespace std;


int main() {
  int n;
  scanf("%d", &n);
  int best = (int) 2e9;
  int ans = -1;
  for (int i = 0; i < n; i++) {
    int a;
    scanf("%d", &a);
    int wait = (a + n - 1 - i) / n;
    if (wait < best) {
      ans = i;
      best = wait;
    }
  }
  printf("%d\n", ans + 1);
  return 0;
}