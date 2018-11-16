#include <bits/stdc++.h>

using namespace std;

int main() {
  int a1, a2;
  scanf("%d %d", &a1, &a2);
  map<pair<int, int>, int> d;
  d[{a1, a2}] = 0;
  queue<pair<int, int> > qu;
  qu.push({a1, a2});
  while (!qu.empty()) {
    auto cur = qu.front();
    qu.pop();
    int x = cur.first, y = cur.second;
    if (x == 0 || y == 0) {
      continue;
    }
    if (x == 1 && y == 1) {
      continue;
    } else if (x == 1) {
      if (!d.count({x + 1, y - 2})) {
        d[{x + 1, y - 2}] = d[{x, y}] + 1;
        qu.push({x + 1, y - 2});
      }
    } else if (y == 1) {
      if (!d.count({x - 2, y + 1})) {
        d[{x - 2, y + 1}] = d[{x, y}] + 1;
        qu.push({x - 2, y + 1});
      }
    } else {
      if (!d.count({x + 1, y - 2})) {
        d[{x + 1, y - 2}] = d[{x, y}] + 1;
        qu.push({x + 1, y - 2});
      }
      if (!d.count({x - 2, y + 1})) {
        d[{x - 2, y + 1}] = d[{x, y}] + 1;
        qu.push({x - 2, y + 1});
      }
    }
  }
  int ans = 0;
  for (auto x : d) {
    ans = max(ans, x.second);
  }
  printf("%d\n", ans);
  return 0;
}