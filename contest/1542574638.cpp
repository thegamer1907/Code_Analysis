#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX_N = 1;
const double eps = 1e-7;

int h, m, s, t1, t2;
double dh, dm, ds;

int sgn(double x)
{
  if (x < -eps) return -1;
  if (x > eps) return 1;
  return 0;
}

bool check(int st, int ed)
{
  if (st > ed) swap(st, ed);
  if (sgn(dh - st) == 0 || sgn(dm - st) == 0 || sgn(ds - st) == 0) return false;
  if (sgn(dh - ed) == 0 || sgn(dm - ed) == 0 || sgn(ds - ed) == 0) return false;

  double mid = (st + ed) / 2.0;
  if (st == 1 && ed == 12) mid = 0.5;
  if (sgn(dh - mid) == 0 || sgn(dm - mid) == 0 || sgn(ds - mid) == 0) return false;
  return true;
}

void format(double &x)
{
  for (int i = 0; i <= 11; ++i) {
    if (sgn(i - x) < 0 && sgn(i + 1 - x) > 0) {
      x = i + 0.5;
      return;
    }
  }
}

int main()
{
#ifdef linjian
freopen("C:\\Users\\linjian\\Documents\\in.txt", "r", stdin);
#endif
  cin >> h >> m >> s >> t1 >> t2;
  if (t1 == t2) {
    cout << "YES\n";
    return 0;
  }
  dh = h, dm = m, ds = s;
  if (m || s) dh += 0.5;
  if (s) dm += 0.5;
  dm /= 5; ds /= 5;
  if (dm > 12.0) dm -= 12.0;
  if (dh > 12.0) dh -= 12.0;
  if (ds > 12.0) ds -= 12.0;
  format(dm);
  format(dh);
  format(ds);
  if (sgn(dm - 0.0) == 0) dm = 12.0;
  if (sgn(ds - 0.0) == 0) ds = 12.0;
  //cout << "dh:" << dh << "\tdm:" << dm << "\tds:" << ds << endl;
  bool ok = true;
  for (int i = 1; ; ++i) {
    int tmp = t1 + i;
    int pre = tmp - 1;
    while (pre <= 0) pre += 12;
    while (pre > 12) pre -= 12;
    while (tmp > 12) tmp -= 12;
    if (!check(pre, tmp)) {
      ok = false;
      break;
    }
    if (tmp == t2) break;
  }
  if (ok) {
    cout << "YES\n";
    return 0;
  }
  ok = true;
  check(1, 2);
  for (int i = -1; ; --i) {
    int tmp = t1 + i;
    while (tmp <= 0) tmp += 12;
    while (tmp > 12) tmp -= 12;
    int pre = tmp + 1;
    while (pre > 12) pre -= 12;
    if (!check(pre, tmp)) {
      ok = false;
      break;
    }
    if (t2 == tmp) break;
  }
  if (ok) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}