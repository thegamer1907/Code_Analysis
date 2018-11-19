#include <bits/stdc++.h>

using namespace std;

const double eps = 1e-8;
const double PI   = 3.14159265358979323846264338;
int sgn(double x) { return abs(x) < eps ? 0 : (x > 0 ? 1 : -1); }
const double S = 6.0 / 180 * PI;
const double M = S / 60;
const double H = M / 60;

int main() {
  ios::sync_with_stdio(false);
  #ifdef Zonda_R
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
  #endif
  int h, m, s, t1, t2;
  cin >> h >> m >> s >> t1 >> t2;
  double a = 1.0 * s * S;
  double b = 1.0 * m / 60 * 2 * PI + s * M;
  double c = (1.0 * h / 12 * 2 * PI) + (m * 60 + s) * H;
  double x = 1.0 * t1 / 12 * 2 * PI; 
  double y = 1.0 * t2 / 12 * 2 * PI;
  if(x > y) swap(x, y);
  cerr << a << " " << b << " " << c << " " << x << " " << y << endl;
  if((sgn(a - x) == 1 && sgn(a - y) == -1 && sgn(b - x) == 1 && sgn(b - y) == -1 && sgn(c - x) == 1 && sgn(c - y) == -1) 
    || ((sgn(a - x) == -1 || sgn(a - y) == 1) && (sgn(b - x) == -1 || sgn(b - y) == 1) && (sgn(c - x) == -1 || sgn(c - y) == 1))) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}