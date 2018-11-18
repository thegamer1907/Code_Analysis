#include <bits/stdc++.h>

typedef std::pair<int, int> ii;
#define int int64_t

const int kInfty = 1e18;
const double kEps = 1e-7;

int32_t main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
//   freopen("task.inp", "r", stdin);

  double h, m, s, t1, t2;
  std::cin >> h >> m >> s >> t1 >> t2;

  double actual_h = h * 5 + 5 * m / 60 + s / 720;
  if (actual_h >= 60.0) actual_h -= 60.0;
  double actual_m = m + s / 60;
  double actual_s = s;
  t1 *= 5; t2 *= 5;
  if (t1 >= 60.0) t1 -= 60.0;
  if (t2 >= 60.0) t2 -= 60.0;

  if (t2 > t1) std::swap(t1, t2);
  bool ok = false;
  if (t1 >= actual_h && actual_h >= t2 ||
  	  t1 >= actual_m && actual_m >= t2 ||
  	  t1 >= actual_s && actual_s >= t2);
  else ok = true;  
  
  if (t2 >= actual_h || t2 >= actual_m || t2 >= actual_s ||
  		t1 <= actual_h || t1 <= actual_m || t1 <= actual_s);
  else ok = true;

	std::cout << (ok ? "YES" : "NO");
}