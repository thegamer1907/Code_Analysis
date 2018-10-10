#define _USE_MATH_DEFINES
#include <cassert>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
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

using namespace std;

typedef long long int64;
typedef pair<int, int> ii;
const int INF = 1 << 30;

int main() {
  int n, m;
  scanf("%d%d", &n, &m);
  static char s[1000];
  vector<string> A, B;
  for (int i = 0; i < n; ++i) {
    scanf("%s", s);
    A.push_back(string(s));
  }
  for (int i = 0; i < m; ++i) {
    scanf("%s", s);
    B.push_back(string(s));
  }
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  int cnt = 0;
  for (int i = 0, j = 0; i < n && j < m; ) {
    if (A[i] < B[j]) {
      ++i;
    } else if (A[i] > B[j]) {
      ++j;
    } else {
      ++cnt;
      ++i;
      ++j;
    }
  }
  int left[2] = {n - cnt, m - cnt};
  int turn = 0, ret = -1;
  while (true) {
    if (cnt > 0) {
      --cnt;
    } else {
      if (left[turn] == 0) {
        ret = 1 - turn;
        break;
      } else {
        --left[turn];
      }
    }
    turn = 1 - turn;
  }
  puts(ret == 0 ? "YES" : "NO");
  return 0;
}
