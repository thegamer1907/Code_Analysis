#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pii;
typedef long double dbl;

const dbl EPS = 1e-8;

int h, m, s, t1, t2;

bool inside(dbl t1, dbl t2, dbl hh, dbl mm, dbl ss) {
  int cnt = hh > t1 && hh < t2;
  cnt += mm > t1 && mm < t2;
  cnt += ss > t1 && ss < t2;
  return cnt % 3 == 0;
}

int main() {
#ifdef LOCAL
  freopen("input", "r", stdin);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(0);        
  cin >> h >> m >> s >> t1 >> t2;
  h %= 12;
  t1 %= 12;
  t2 %= 12;
  dbl ss = s / 60.;
  dbl mm = (m + ss) / 60.;
  dbl hh = (h + mm) / 12.;
  dbl tt1 = t1 / 12.;
  dbl tt2 = t2 / 12.;
  if (tt1 > tt2) swap(tt1, tt2);
  bool yes = inside(tt1, tt2, hh, mm, ss);
  cout << (yes ? "YES" : "NO") << endl;
  return 0;
}