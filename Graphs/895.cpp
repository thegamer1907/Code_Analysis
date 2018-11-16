#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
  std::ios::sync_with_stdio(false);
  int n, t; cin >> n >> t;
  vector<int> a(n - 1);
  for (int i = 0; i < n - 1; ++i) cin >> a[i];
  vector<bool> ok(n, false);
  ok[0] = true;

  for (int i = 0; i < n - 1; ++i)
    if (ok[i]) ok[i + a[i]] = true;

  cout << (ok[t - 1] ? "YES" : "NO") << endl;
  return 0;
}
