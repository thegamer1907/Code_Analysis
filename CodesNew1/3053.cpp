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

int k, z[1000001];
char s[1000001];

int main() {
  scanf("%d %1000000s", &k, s);
  int n, zz = 0;
  for (n = 0; s[n]; n++) {
    if (s[n] == '1') {
      z[n] = zz;
      zz = 0;
    } else {
      zz++;
    }
  }
  z[n] = zz;
  int64_t ans = 0;
  if (k == 0) {
    for (int i = 0; i <= n; i++) ans += (int64_t)z[i]*(z[i]+1)/2;
  } else {
    int i = 0, j;
    while (s[i] == '0') i++;
    if (i < n) {
      for (j = i+1; j <= n; j++) {
        if (s[j] != '0' && --k == 0) break;
      }
      while (j <= n) {
        pr("i=%d j=%d ans+=%d*%d\n", i, j, z[i]+1, z[j]+1);
        ans += (int64_t)(z[i++]+1)*(z[j++]+1);
        while (s[i] == '0') i++;
        while (s[j] == '0') j++;
      }
    }
  }
  printf("%" PRId64 "\n", ans);
  return 0;
}
