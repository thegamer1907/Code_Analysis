#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <list>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);

  const int maxn = 1e7;
  int n;
  scanf("%d", &n);
  vector<int> w(maxn + 1, 0);
  for (int i = 0; i < n; i++) {
    int tmp;
    scanf("%d", &tmp);
    w[tmp]++;
  }

  vector<int> v(maxn + 1, 0);
  vector<bool> composite(maxn + 1, false);
  for (int i = 2; i <= maxn; i++) {
    if (!composite[i]) {
      int total = w[i];
      for (int j = 2 * i; j <= maxn; j += i) {
        total += w[j];
        composite[j] = true;
      }
      v[i] = total;
    }

    v[i] += v[i - 1];
  }

  int m;
  scanf("%d", &m);
  for (int i = 0; i < m; i++) {
    int a, b;
    scanf("%d %d", &a, &b);
    b = min(b, maxn);
    if (a > b) {
      printf("0\n");
      continue;
    }
    printf("%d\n", v[b] - v[a - 1]);
  }

  return 0;
}
