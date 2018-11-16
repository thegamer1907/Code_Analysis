#include <algorithm>
#include <cinttypes>
#include <cstdio>
#include <vector>

using namespace std;

int p[2001], c[2001];

int main() {
  int n, ans = 0;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%d", p+i);
    if (p[i] > 0) c[p[i]]++;
  }
  for (int i = 1; i <= n; i++) {
    if (c[i] == 0) {
      int d = 0;
      for (int j = i; j > 0; j = p[j]) d++;
      ans = max(ans, d);
    }
  }
  printf("%d\n", ans);
  return 0;
}
