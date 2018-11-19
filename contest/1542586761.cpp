#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  double h, m, s, t1, t2;
  cin >> h >> m >> s >> t1 >> t2;
  h = (int)h % 12;
  m /= 5;
  s /= 5;
  t1 = (int)t1 % 12;
  t2 = (int)t2 % 12;
  if (s >= 0) {
    m += 1e-6;
    if (m >= 12) {
      m -= 12;
    }
  }
  if (m >= 0 || s >= 0) {
    h += 1e-6;
    if (h >= 12) h -= 12;
  }
  vector<double> angels = {h, m, s};
  sort(angels.begin(), angels.end());
  // cout << angels[0] << " " << angels[1] << " " << angels[2] << endl;
  if ((t1 > angels[0] && t2 > angels[0] && t1 < angels[1] && t2 < angels[1]) ||
      (t1 > angels[1] && t2 > angels[1] && t1 < angels[2] && t2 < angels[2]) ||
      (t1 > angels[2] && t2 > angels[2]) ||
      (t1 < angels[0] && t2 < angels[0]) ||
      (t1 > angels[2] && t2 < angels[0]) ||
      (t1 < angels[0] && t2 > angels[2])) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
