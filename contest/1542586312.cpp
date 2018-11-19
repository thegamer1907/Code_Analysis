#include <cstdio>
char s[5], p[5];
int main() {
  int n;
  bool a = false, b = false;
  scanf("%s%d", s, &n);
  while (n--) {
    scanf("%s", p);
    if (p[1] == s[0]) a = true;
    if (p[0] == s[1]) b = true;
    if (p[0] == s[0] && p[1] == s[1]) a = b = true;
  }
  puts(a && b ? "YES" : "NO");
  return 0;
}
