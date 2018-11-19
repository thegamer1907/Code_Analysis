#include <cstdio>
#include <iostream>
using namespace std;
int main() {
  int h, m, s, a, b;
  scanf("%d%d%d%d%d", &h, &m, &s, &a, &b);
  double x, y, z, c, d;
  z = s / 60.0;
  y = m + z;
  y /= 60;
  x = y + h;
  x /= 12;
  c = a / 12.0;
  d = b / 12.0;
  if (x > y) swap(x, y);
  if (y > z) swap(y, z);
  if (x > y) swap(x, y);
  if (x <= c && c <= y && x <= d && d <= y) return puts("YES"), 0;
  if (y <= c && c <= z && y <= d && d <= z) return puts("YES"), 0;
  if ((z <= c || c <= x) && (z <= d || d <= x)) return puts("YES"), 0;
  puts("NO");
  return 0;
}
