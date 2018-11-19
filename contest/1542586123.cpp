#include <bits/stdc++.h>
using namespace std;
int a[105];
int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    int t = 0, x;
    for (int j = 0; j < k; j++) {
      scanf("%d", &x);
      t += (x << j);
    }
    a[t]++;
  }
  bool ok = a[0];
  for (int i = 0; i <= 15; i++) {
    for (int j = 0; j <= 15; j++) {
      if ((i & j) == 0 && a[i] && a[j]) {
        ok = true;
      }
    }
  }
  printf(ok ? "YES\n" : "NO\n");
  return 0;
}
