#include <bits/stdc++.h>
using namespace std;

bool mask[16];

int main() {
  int n, k;
  scanf("%d%d", &n, &k);
  for (int i = 0; i < n; i++) {
    int x = 0;
    for (int j = 0; j < k; j++) {
      int a;
      scanf("%d", &a);
      x <<= 1;
      if (a) x |= 1;
    }
    mask[x] = true;
  }

  for (int i = 0; i < (1 << k); i++) {
    for (int j = 0; j < (1 << k); j++) {
      if (mask[i] && mask[j] && (i & j) == 0) {
        puts("YES");
        return 0;
      }
    }
  }
  puts("NO");

  return 0;
}
