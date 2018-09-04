#include <bitset>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
#include <iterator>
#include <unordered_map>

#if DEBUG
#include "prettyprint.hpp"
#define print_container(c) cout << c << endl;
#endif

using namespace std;

const int MAXN = 10000005;

int counts[MAXN];
bool p[MAXN];
int totals[MAXN];
int sums[MAXN];

int main () {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int a;
    scanf("%d", &a);
    counts[a]++;
  }
  for (int i = 2; i < MAXN; i++) {
    if (!p[i]) {
      totals[i] += counts[i];
      for (int j = i * 2; j < MAXN; j += i) {
        p[j] = true;
        totals[i] += counts[j];
      }
    }
  }

  for (int i = 1; i < MAXN; i++) {
    sums[i] = sums[i - 1] + totals[i];
  }

  int m;
  scanf("%d", &m);
  for (int i = 0; i < m; i++) {
    int l, r;
    scanf("%d %d", &l, &r);
    l = min(l, MAXN - 3);
    r = min(r, MAXN - 3);
    cout << sums[r] - sums[l - 1] << endl;
  }
}
