#include <bits/stdc++.h>
using namespace std;

signed main() {
  ios::sync_with_stdio(false);

  int64_t N;
  cin >> N;

  auto f = [&](int64_t n, int64_t k) {
    int64_t a = 0;
    while (n) {
      a += min(n, k);
      n -= min(n, k);
      n -= n / 10;
    }
    return a;
  };

  /*
  srand(time(0));
  for (int _ = 0; _ < N; ++_) {
    int n = rand() % 100000 + 1;
    cout << n << endl;
    for (int k = 2; k * 2 <= n; ++k) {
      assert(f(n, k) >= f(n, k - 1));
    }
  }
  */

  int64_t lb = 0, ub = N;
  while (ub - lb > 1) {
    int64_t mb = lb + ub >> 1;
    (f(N, mb) * 2 >= N ? ub : lb) = mb;
  }

  cout << ub << endl;

  return 0;
}
