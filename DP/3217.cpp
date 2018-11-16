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
  int n, m;
  scanf("%d%d", &n, &m);
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  int sum = 0;
  vector<int> A;
  for (int i = 0; i < n; ++i) {
    if (a[i] % 2 == 0) {
      ++sum;
    } else {
      --sum;
    }
    if (sum == 0 && i + 1 < n) {
      A.push_back(abs(a[i] - a[i + 1]));
    }
  }
  sort(A.begin(), A.end());
  int ret = 0;
  for (auto& it : A) {
    if (m < it) break;
    m -= it;
    ++ret;
  }
  printf("%d\n", ret);
  return 0;
}
