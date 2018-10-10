#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;

void solve() {
  size_t n;
  double l;
  cin >> n >> l;
  std::vector<double> as(n);
  for (auto& a : as) {
    cin >> a;
  }
  as.push_back(l);

  std::sort(as.begin(), as.end());

  auto f = [&](double d) {
    as.back() = l + d;
    double pre_pos = -d;
    for (auto a : as) {
      if (pre_pos + d * 2 < a) return false;
      pre_pos = a;
    }
    return true;
  };
  // ffffffff[t]tttttt

  auto bin_search = [](double l, double r, auto f) {
    while (std::abs(r - l) > 1e-10) {
      double h = (r + l) / 2;
      if (f(h))
        r = h;
      else
        l = h;
    }
    return (r + l) / 2;
  };

  cout << bin_search(0.0, l, f) << endl;
}

int main() {
  std::ios::sync_with_stdio(false);
  cout << std::fixed;
  cout.precision(10);
#ifdef _DEBUG
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
  while (!cin.eof())
#endif
    solve();
  return 0;
}