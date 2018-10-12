#define NDEBUG

#include <algorithm>
#include <cassert>
#include <cinttypes>
#include <cstdio>

#ifdef NDEBUG
#  define pr(...)
#else
#  define pr(...) printf(__VA_ARGS__)
#endif

using namespace std;

int k, c[1000001];
char s[1000001];

int main() {
  scanf("%d %1000000s", &k, s);
  int64_t ans = 0;
  int sum = 0;
  c[0] = 1;
  for (int i = 0; s[i]; i++) {
    if (s[i] == '1') sum++;
    if (sum >= k) ans += c[sum-k];
    c[sum]++;
  }
  printf("%" PRId64 "\n", ans);
  return 0;
}
