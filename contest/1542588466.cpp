#include <bits/stdc++.h>
using namespace std;
#define FOR(i, n) for(int i = 1; i <= n; i++)
#define REP(i, n) for(int i = 0; i < n; i++)
#define MP make_pair
#define FI first
#define SE second
#define VI vector<int>
#define CLR(x) memset(x, 0, sizeof(x))
#define SZ(x) (x.size())


bool check(double b1, double b2, double a1, double a2, double a3) {
  double a[3] = {a1, a2, a3};
  for (int i = 0; i < 3; i++) {
    if (a[i] >= 360)
      a[i] -= 360;
    if ((b1 < a[i] - 360 && a[i] - 360 < b2) || (b1 < a[i] && a[i] < b2) || (b1 < a[i] + 360 && a[i] + 360 < b2)) {
      // printf("%f %f %f %f %f %f\n", b1, b2, a1, a2, a3, a[i]);
      return false;
    }
  }
  return true;
}
int main() {
#ifdef LOCAL
  freopen("in.txt", "r", stdin);
#endif
  int h, m, s, t1, t2;
  scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
  double a1 = 30*(h+(m+s/60.0)/60.0),
    a2 = 6*(m+s/60.0),
    a3 = 6*s;
  if (t1 > t2)
    swap(t1, t2);
  if (t1 == t2) {
    puts("YES");
    return 0;
  }
  if (t1 > t2)
    swap(t1, t2);
  double b1 = t1*30, b2 = t2 * 30;
  if (check(b1, b2, a1, a2, a3) || check(b2, b1+360, a1, a2, a3))
    puts("YES");
  else
    puts("NO");
  return 0;
}
