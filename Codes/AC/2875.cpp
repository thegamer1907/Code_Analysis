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

const int N = 1e6 + 10;
int z[N];
char s[N];

int main() {
  scanf("%s", s);
  int n = strlen(s);
  int L = 0, R = 0;
  for (int i = 1; i < n; ++i) {
    if (i > R) {
      for (L = R = i; R < n && s[R - L] == s[R]; ++R);
      z[i] = R - L;
      --R;
    } else {
      int k = i - L;
      if (z[k] < R - i + 1) {
        z[i] = z[k];
      } else {
        for (L = i; R < n && s[R - L] == s[R]; ++R);
        z[i] = R - L;
        --R;
      }
    }
  }

  int ret = 0, maxz = 0, ret_i = -1;
  for (int i = 1; i < n; ++i) {
    if (z[i] == n - i && maxz >= z[i]) {
      ret = z[i];
      ret_i = i;
      break;
    }
    maxz = max(maxz, z[i]);
  }
  if (ret_i < 0) {
    puts("Just a legend");
  } else {
    puts(s + ret_i);
  }

  return 0;
}
