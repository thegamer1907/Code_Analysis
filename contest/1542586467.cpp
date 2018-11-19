#include <bits/stdc++.h>

#define sqr(x) ((x)*(x))

using namespace std;

int h, m, s, hh, mm, ss, t1, t2;

void solve() {
  scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
  h %= 12; t1 %= 12; t2 %= 12;
  hh = h * 360 / 12;
  mm = m * 360 / 60;
  ss = s * 360 / 60;
  if (ss) mm += 3;
  if (mm) hh += 15;
  t1 = t1 * 360 / 12;
  t2 = t2 * 360 / 12;
  int k = t1;
  while (k != t2) {
    if (k == hh || k == mm || k == ss) {
      break;
    }
    k = (k + 1) % 360;
  }
  if (k == t2) {
    puts("YES"); return;
  }
  k = t1;
  while (k != t2) {
    if (k == hh || k == mm || k == ss) {
      break;
    }
    k = (k + 359) % 360;
  }
  if (k == t2) puts("YES");
  else puts("NO");
}

int main() {
  solve();
  return 0;
}
