#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>

using namespace std;

vector<int> parent;

int find(int x) {
  if (x != parent[x]) parent[x] = find(parent[x]);
  return parent[x];
}

void unite(int a, int b) {
  a = find(a);
  b = find(b);
  if (a != b) parent[a] = b;
}

int main() {
  std::ios::sync_with_stdio(false);
  int n; cin >> n;
  for (int i = 0; i < n; ++i) parent.push_back(i);

  for (int i = 0, x, y; i < n; ++i) {
    cin >> x;
    x--;
    if (i != x) unite(i, x);
  }

  int cnt = 0;
  for (int i = 0; i < n; ++i)
    if (parent[i] == i) cnt++;

  cout << cnt << endl;
  return 0;
}
