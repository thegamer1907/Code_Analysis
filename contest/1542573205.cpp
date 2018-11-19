#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int h, m, s, t1, t2;
  cin >> h >> m >> s >> t1 >> t2;
  h = h % 12 * 5;
  t1 = t1 % 12 * 5;
  t2 = t2 % 12 * 5;
  double s1 = s;
  double m1 = m + s1 / 60;
  double h1 = h + m1 / 12;
  vector<double> a = {h1, m1, s1};
  sort(a.begin(), a.end());
  for (int i = 1; i < 3; i++) {
    if (t1 > a[i - 1] && t1 < a[i] && t2 > a[i - 1] && t2 < a[i]) {
      cout << "YES" << endl;
      return 0;
    }
  }
  if ((t1 > a[2] || t1 < a[0]) && (t2 > a[2] || t2 < a[0])) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
