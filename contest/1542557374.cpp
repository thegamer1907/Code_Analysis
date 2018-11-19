#include <cstdio>
using namespace std;

const int N = 1e5 + 10;

int n, k, y;
int x[N], f[100];

int main() {
  scanf("%d%d", &n, &k);
  for (int i = 1; i <= n; ++i) {
    x[i] = 0;
    for (int j = 0; j < k; ++j) {
      scanf("%d", &y);
      x[i] += (y << j);
    }
    f[x[i]]++;
  }
  int mx = (1 << k) - 1;
  for (int i = 0; i < k; ++i)
    for (int j = mx; j; --j)
      if ((j >> i & 1)) f[j] += f[j ^ (1 << i)];
  bool flag = 0;
  for (int i = 1; i <= n; ++i) {
    if (f[mx ^ x[i]]) { flag = 1; break; }
  }
  if (flag) puts("YES");
  else puts("NO");
  return 0;
}
