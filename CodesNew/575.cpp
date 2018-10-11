#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define NDEBUG

#include <algorithm>
#include <cassert>
#include <cinttypes>
#include <cstdio>
#include <vector>

#ifdef NDEBUG
#  define debug(...)
#else
#  define debug(...)                                \
  do {                                              \
    fprintf(stderr, "%s:%d: ", __FILE__, __LINE__); \
    fprintf(stderr, __VA_ARGS__);                   \
    fputc('\n', stderr);                            \
  } while (false)
#endif

using namespace std;

const int X = 1e7;
int n;
int64_t cnt[X+1];
vector<int> p;
bool composite[X+1];

int main() {
  scanf("%d", &n);
  int x_max = 0;
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    cnt[x]++;
    x_max = max(x_max, x);
  }
  for (int i = 2; i <= x_max; i++) {
    if (!composite[i]) {
      p.push_back(i);
      for (int j = i+i; j <= x_max; j += i) composite[j] = true, cnt[i] += cnt[j];
    }
  }
  for (unsigned i = 1; i < p.size(); i++) cnt[p[i]] += cnt[p[i-1]];
  int m;
  scanf("%d", &m);
  while (m-- > 0) {
    int l, r;
    scanf("%d %d", &l, &r);
    int i = lower_bound(p.begin(), p.end(), l) - p.begin() - 1;
    int j = upper_bound(p.begin(), p.end(), r) - p.begin() - 1;
    debug("i=%d j=%d p[i]=%d p[j]=%d", i, j, p[i], p[j]);
    printf("%" PRId64 "\n", cnt[p[j]] - (i < 0 ? 0 : cnt[p[i]]));
  }
  return 0;
}
