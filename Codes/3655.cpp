#include <algorithm>
#include <cinttypes>
#include <cstdio>
#include <limits>

using namespace std;

char s[101];

int main() {
  scanf("%100s", s);
  int n[3], p[3], c[3] = {};
  int64_t r, ans = 0;
  scanf("%d %d %d %d %d %d %" SCNd64, n, n+1, n+2, p, p+1, p+2, &r);
  for (int i = 0; s[i]; i++) {
    switch (s[i]) {
    case 'B': c[0]++; break;
    case 'S': c[1]++; break;
    case 'C': c[2]++; break;
    }
  }
  int64_t m[3], rr[3];
  for (int i = 0; i < 3; i++) {
    if (c[i] > 0) {
      m[i] = n[i] / c[i];
      rr[i] = n[i] % c[i];
    } else {
      m[i] = numeric_limits<int64_t>::max();
      rr[i] = 0;
    }
  }
  int k[] = {0, 1, 2};
  sort(k, k+3, [&m](int i, int j) { return m[i] < m[j]; });
  ans += m[k[0]];
  int pc = p[k[0]] * c[k[0]];
  r += p[k[0]] * rr[k[0]];
  int64_t x = min((int64_t)m[k[1]] - m[k[0]], r / pc);
  ans += x;
  r -= x * pc;
  pc += p[k[1]] * c[k[1]];
  r += p[k[1]] * rr[k[1]];
  x = min((int64_t)m[k[2]] - m[k[1]], r / pc);
  ans += x;
  r -= x * pc;
  pc += p[k[2]] * c[k[2]];
  r += p[k[2]] * rr[k[2]];
  ans += r / pc;
  printf("%" PRId64 "\n", ans);
  return 0;
}
