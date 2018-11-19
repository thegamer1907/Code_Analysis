#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

int h, m, s, t1, t2;
int hh, mm, ss, tt1, tt2;
int mark[N];

int main() {
  cin >> h >> m >> s >> t1 >> t2;
  ss = (120 * 6 * s) % 43200;
  mm = (120 * 6 * m + 12 * s) % 43200;
  hh = (120 * 30 * h + 60 * m + s) % 43200;
  tt1 = (120 * 30 * t1) % 43200;
  tt2 = (120 * 30 * t2) % 43200;
  mark[ss] = mark[mm] = mark[hh] = 1;
  for (int i = tt1 + 1; i != tt1; ++i) {
    if (i >= 43200) i -= 43200;
    if (mark[i]) {
      break;
    }
    if (i == tt2) {
      puts("YES");
      return 0;
    }
  }
  for (int i = tt1 - 1; i != tt1; --i) {
    if (i < 0) i += 43200;
    if (mark[i]) {
      break;
    }
    if (i == tt2) {
      puts("YES");
      return 0;
    }
  }
  puts("NO");
  return 0;
}

