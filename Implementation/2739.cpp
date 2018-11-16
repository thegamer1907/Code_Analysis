#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
const int MAXN = 3e4 + 10;

int a[MAXN];
int main() {
  int n, t;
  scanf("%d%d", &n, &t);
  for (int i = 1; i < n; i++) {
    scanf("%d", a + i);
  }

  int cur = 1;
  while(cur != n) {
    cur += a[cur];
    if (cur == t) {
      puts("YES");
      return 0;
    }
        
  }
  puts("NO");
}
