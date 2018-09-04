#include <algorithm>
#include <cinttypes>
#include <cstdio>

using namespace std;

int64_t n, m, k;

int64_t nth(int64_t x) {
  int64_t ans = 1;
  for (int64_t i = 1; i <= n; i++) ans += min(m, (x - 1) / i);
  return ans;
}

int64_t bisect(int64_t lo, int64_t hi) {
  auto m = (lo + hi) / 2, k2 = nth(m);
  if (k2 > k) return bisect(lo, m - 1);
  else if (k2 < k) {
    if (nth(m+1) > k) return m;
    return bisect(m+1, hi);
  }
  return m;
}

int main() {
  scanf("%" SCNd64 " %" SCNd64 " %" SCNd64, &n, &m, &k);
  int64_t x = bisect(1, n*m), ans = n*m+1;
  for (int64_t i = 1; i <= n; i++) {
    auto ans2 = min(m, (x+i-1) / i) * i;
    if (ans2 >= x && ans2 - x < ans - x) ans = ans2;
  }
  printf("%" PRId64 "\n", ans);
  return 0;
}
