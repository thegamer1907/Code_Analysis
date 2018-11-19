#include <bits/stdc++.h>

using namespace std;



int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  double h, m, s, t1, t2;
  cin >> h >> m >> s >> t1 >> t2;
  m += s/60.;
  h += m/60.;
  h *= 5;
  t1 *= 5;
  t2 *= 5;
  double tmn = min(t1, t2);
  double tmx = max(t1, t2);
  int cnt = 0;
  cnt += (int)(tmn < h && h < tmx);
  cnt += (int)(tmn < m && m < tmx);
  cnt += (int)(tmn < s && s < tmx);
  if (cnt==0 || cnt==3) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
