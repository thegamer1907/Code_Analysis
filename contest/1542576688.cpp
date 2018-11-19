#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, y;
  scanf("%d%d", &n, &k);
  int m = 1 << k;
  int a[m];
  memset(a, 0, sizeof a);
  for (int i = 0; i < n; i++) {
    int x = 0;
    for (int j = 0; j < k; j++) {
      scanf("%d", &y);
      if (y) {
        x |= 1 << j;
      }
    }
    a[x]++;
  }
  if (a[0]) {
    puts("YES");
    return 0;
  }
  for (int i = 0; i < m; i++) {
    for (int j = i + 1; j < m; j++) {
      if (a[i] > 0 && a[j] > 0 && (i & j) == 0) {
        puts("YES");
        return 0;
      }
    }
  }
  puts("NO");
}
