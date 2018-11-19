#include <bits/stdc++.h>

using namespace std;

int main() {
  int h, m, s, t1, t2;
  cin >> h >> m >> s >> t1 >> t2;
  double hh = 5 * (h % 12) + m / 60. + s / 3600.;
  double mm = m + s / 60.;
  t1 = (t1 % 12) * 5;
  t2 = (t2 % 12) * 5;
  int a = min(t1, t2);
  int b = max(t1, t2);
  int x = 0, y = 0;
  if (hh > a && hh < b) {
    x++;
  }
  if (mm > a && mm < b) {
    x++;
  }
  if (s > a && s < b) {
    x++;
  }
  if (x == 3 || x == 0) {
    puts("YES");
  } else {
    puts("NO");
  }
}
