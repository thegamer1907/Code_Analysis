#include <bits/stdc++.h>
using namespace std;

int h, m, s, t1, t2;
double a, b, c, p1, p2;

int main() {
  scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
  c = s / 60.0;
  b = (m + c) / 60.0;
  a = (h + b) / 12.0;
  p1 = t1 / 12.0;
  p2 = t2 / 12.0;
  if (a > b) swap(a, b);
  if (a > c) swap(a, c);
  if (b > c) swap(b, c);
  if (p1 > p2) swap(p1, p2);
  if (((p1 < a || p1 > c) && (p2 < a || p2 > c)) ||
      ((p1 > a && p1 < b) && (p2 > a && p2 < b)) ||
      ((p1 > b && p1 < c) && (p2 > b && p2 < c))) {
    puts("YES");
  } else {
    puts("NO");
  }
  return 0;
}
