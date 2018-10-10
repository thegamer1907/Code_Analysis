#include <algorithm>
#include <cinttypes>
#include <cstdio>

using namespace std;

int n, a[500000];

int main() {
  int64_t sum = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", a+i);
    sum += a[i];
  }
  if (sum % 3 != 0) puts("0");
  else {
    int64_t t = sum / 3, s = 0, ans = 0;
    int c = 0;
    for (int i = 0; i < n-1; i++) {
      s += a[i];
      if (s == 2*t) ans += c;
      if (s == t) c++;
    }
    printf("%" PRId64 "\n", ans);
  }
  return 0;
}
