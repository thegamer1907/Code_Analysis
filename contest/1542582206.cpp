#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  double h,m,s,t1,t2;
  cin >> h >> m >> s >> t1 >> t2;
  if (t1 == 12) t1 = 0;
  if (t2 == 12) t2 = 0;
  if (h == 12) h = 0;
  m = m + (s/60);
  h = h + (m/60);
  m = m / 5;
  s = s / 5;

  double tmp = min(t1, t2);
  t2 = max(t1, t2);
  t1 = tmp;
  //cout << h << " " << m << " " << s << " " << t1 << " "<< t2 << endl;

  if ((h > t1 && h < t2) || (s > t1 && s < t2) || (m > t1 && m < t2)) {
    if ((!(h > t1 && h < t2)) || (!(s > t1 && s < t2)) || (!(m > t1 && m < t2))) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
