#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <queue>

using namespace std;

#define max 20001
#define inf 100000000

queue<int> q;
vector<int> d(max, inf);

void add(int x, int len) {
    if (x < 1 || x >= max) return;
    if (d[x] <= len) return;
    d[x] = len;
    q.push(x);
}

int main() {
  std::ios::sync_with_stdio(false);
  int n, m; cin >> n >> m;

  q.push(n); d[n] = 0;
  while (!q.empty()) {
      int x = q.front(); q.pop();
      add(x * 2, d[x] + 1);
      add(x - 1, d[x] + 1);
  }

  cout << d[m] << endl;
  return 0;
}