#pragma GCC diagnostic ignored "-Wunused-result"
#define NDEBUG

#include <algorithm>
#include <cassert>
#include <cinttypes>
#include <cstdio>
#include <tuple>
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
using tii = tuple<int, int>;

const int N = 1e5;
char s[N+10];

int main() {
  scanf("%s", s);
  int cnt[3]{};
  for (int i = 0; s[i]; i++) {
    if ((s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'A') ||
        (s[i] == 'B' && s[i+1] == 'A' && s[i+2] == 'B')) {
      cnt[0]++;
      i += 2;
    } else if (s[i] == 'A' && s[i+1] == 'B') {
      cnt[1]++;
      i++;
    } else if (s[i] == 'B' && s[i+1] == 'A') {
      cnt[2]++;
      i++;
    }
  }
  puts((cnt[1] > 0 && (cnt[0] > 0 || cnt[2] > 0)) ||
       (cnt[2] > 0 && (cnt[0] > 0 || cnt[1] > 0)) ||
       cnt[0] > 1 ? "YES" : "NO");
  return 0;
}
