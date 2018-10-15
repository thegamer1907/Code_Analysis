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
  int k;
  std::cin >> k;   
  std::string s;
  std::cin >> s;
  int n = s.size();
  std::vector<int> v(n, 0);
  for (int i = 0; i < n; ++i) {
    if (s[i] == '1') v[i] = 1;
    if (i > 0) {
      v[i] += v[i - 1];
    }
  }
  int64_t a = 0;
  int b = 0;
  for (int i = 0; i < n; ++i) {
    auto it1 = std::lower_bound(v.begin() + i, v.end(), b + k);
    auto it2 = std::lower_bound(v.begin() + i, v.end(), b + k + 1);
    a += std::distance(it1, it2);
    b = v[i]; 
  }
  std::cout << a;
}

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}

