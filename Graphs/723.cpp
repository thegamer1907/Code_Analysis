#include <stdio.h> 

int n, t;
char s[69];

int main() {
  scanf("%d %d %s", &n, &t, s);
  while (t--) {
    for (int i = 0; i < n - 1; ++i) {
      if (s[i] == 'B' && s[i + 1] == 'G') {
        s[i] = 'G', s[i + 1] = 'B', ++i;
      }
    }
  }
  puts(s);
  return 0;
}
