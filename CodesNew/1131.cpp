#define _USE_MATH_DEFINES
#include <cassert>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <complex>
#include <cmath>
#include <numeric>
#include <bitset>
#include <functional>

using namespace std;

#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
  cerr << name << ": " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr(names + 1, ',');
  cerr.write(names, comma - names) << ": " << arg1 << " |";
  __f(comma + 1, args...);
}

typedef long long int64;
typedef pair<int, int> ii;
const int INF = 1 << 29;
const int MOD = 1e9 + 7;

int main() {
  int64 n;
  cin >> n;
  int64 low = 1, high = n;
  while (low != high) {
    int64 mid = (low + high) / 2;
    int64 rem = n, cur = 0;
    for (int k = 0; ; ++k) {
      int64 eat = min(rem, mid);
      cur += eat;
      rem -= eat;
      if (rem == 0) break;
      rem -= rem / 10;
    }
    if (cur < (n + 1) / 2) {
      low = mid + 1;
    } else {
      high = mid;
    }
  }
  cout << high << endl;
  return 0;
}
