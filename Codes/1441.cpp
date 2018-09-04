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
  int64_t s;
  std::cin >> n >> s;
  std::vector<int64_t> v(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> v[i]; 
  }
  std::vector<int64_t> b(n);
  int l = 1, r = n + 1;
  int64_t a = 0;
  while (l + 1 < r) {
    int64_t m = (l + r) / 2;
    for (int i = 0; i < n; ++i) {
      b[i] = v[i] + (i + 1) * m;
    }      
    std::sort(b.begin(), b.end());
    int64_t t = 0; 
    for (int64_t j = 0; j < m; ++j) { 
      t += b[j];
    }
    if (t <= s) {
      l = (int)m;
      a = t;
    } else { 
      r = (int)m;
    }
  }
  if (l == 1) {  
    a = 1000 * 1000 * 1000;
    for (int i = 0; i < n; ++i) {
      a = std::min(a, v[i] + i + 1);
    } 
    if (a > s) {
      std::cout << 0 << " " << 0;
    } else { 
      std::cout << 1 << " " << a;
    }
  } else {
    std::cout << l << " " << a;
  }
}

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}

