#include <cstdio>
int S[20];
int main() {
  int n, k;
  scanf("%d%d", &n, &k);
  while (n--) {
    int t = 0, x;
    for (int i = 0; i < k; ++i) {
      scanf("%d", &x);
      t = t * 2 + x;
    }
    ++S[t];
  }
  if (S[0]) {
    puts("YES");
    return 0;
  }
  for (int i = 0; i < (1 << k); ++i)
    for (int j = 0; j < (1 << k); ++j)
      if (!(i & j) && S[i] && S[j]) {
        puts("YES");
        return 0;
      }
  puts("NO");
  return 0;
}
