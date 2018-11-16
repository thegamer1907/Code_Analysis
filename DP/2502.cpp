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
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) cin >> a[i];
  int res = 0, cnt = 1;
  for (int i = 1; i < n; ++i)
    if (a[i] > a[i - 1]) cnt++; else {
      res = max(res, cnt);
      cnt = 1;
    }
  res = max(res, cnt);
  cout << res << endl;
  return 0;
}
