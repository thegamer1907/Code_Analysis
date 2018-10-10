#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5;

struct fr {int m; int s;};

fr v[MAXN + 1];

bool cmp (fr a, fr b) {
  return a.m < b.m;
}



int main() {
  int n, d, i, st, dr;
  long long sol, pw;
  scanf ("%d%d", &n, &d);
  for (i = 1; i <= n; i++) {
    scanf ("%d%d", &v[i].m, &v[i].s);
  }
  sort (v + 1, v + n + 1, cmp);
  st = 1;
  dr = 1;
  sol = 0;
  pw = 0;
  while (dr <= n) {
    if (v[dr].m - v[st].m < d) {
      pw = pw + v[dr].s;
      sol = max (sol, pw);
      dr++;
    }
    else {
      pw = pw - v[st].s;
      st++;
    }
  }
  printf ("%lld\n", sol);
  return 0;
}
