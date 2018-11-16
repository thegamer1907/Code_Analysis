#include <cctype>
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#include <map>
#include <queue>
#include <functional>
#include <iomanip>
#include <unordered_map>

void solve() {  
  int n;
  std::cin >> n;
  std::vector<int> v(n + 1, 0);
  for (int i = 1; i <= n; ++i) {
    int t;
    std::cin >> t;
    if (t == i) {
      v[t] = 2;
    } else {
      v[t] = 1;
    }
  }
  for (int i = 1; i <= n; ++i) {
    v[i] += v[i - 1];
  }
  std::cout << v[n] / 2;
}

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}

