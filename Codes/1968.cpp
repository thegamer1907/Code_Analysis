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
  int n, k;
  std::cin >> n >> k;
  int64_t s = 0;
  std::unordered_map<int, int> one;
  std::unordered_map<int, int64_t> two;
  for (int i = 0; i < n; ++i) {
    int t;
    std::cin >> t;
    if (t % k == 0) {
      if (two.find(t / k) != two.end()) {
        s += two[t / k];
      }  
      two[t] += one[t / k];
    }    
    one[t] += 1;
  } 
  std::cout << s;
}

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}

