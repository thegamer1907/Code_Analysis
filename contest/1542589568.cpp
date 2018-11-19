#include <cstdio>
int main() {
  int h, m, s, t1, t2;
  scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
  h *= 10; t1 *= 10; t2 *= 10;
  (++h) %= 120; t1 %= 120; t2 %= 120;
  m = m * 2 + 1; s = s * 2;
  int i;
  for (i = t1; i != t2; i = (i + 1) % 120)
    if (i == h || i == m || i == s) break;
  if (i == t2) return puts("YES") & 0;
  for (i = t2; i != t1; i = (i + 1) % 120)
    if (i == h || i == m || i == s) break;
  if (i == t1) return puts("YES") & 0;
  puts("NO");
  return 0;
}
