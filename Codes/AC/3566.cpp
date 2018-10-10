#include <bits/stdc++.h>

using namespace std;

const int N = 222222;

int a[N], b[N];
int c[N], d[N];

int main() {
  int n, m, k;
  scanf("%d %d %d", &n, &m, &k);
  int x, s;
  scanf("%d %d", &x, &s);
  for (int i = 1; i <= m; ++i) {
    scanf("%d", a + i);
  }
  a[0] = x;
  for (int i = 1; i <= m; ++i) {
    scanf("%d", b + i);
  }
  for (int i = 1; i <= k; ++i) {
    scanf("%d", c + i);
  }
  for (int i = 1; i <= k; ++i) {
    scanf("%d", d + i);
  }
  long long ans = numeric_limits<long long>::max();
  for (int i = 0; i <= m; ++i) {
    int pos = upper_bound(d, d + k + 1, s - b[i]) - d;
    if (pos == 0) {
      continue;
    }
    --pos;
    int remain = max(0, n - c[pos]);
    ans = min(ans, 1LL * a[i] * remain);
  }
  printf("%I64d\n", ans);
  return 0;
}