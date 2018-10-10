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

  int n, m;
  cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(m, 0));
  for (auto& row : v) {
    for (int& e : row) cin >> e;
  }

  vector<int> w(n);
  iota(begin(w), end(w), 0);
  for (int j = 0; j < m; j++) {
    int k = 0;
    for (int i = 0; i < n; i = k) {
      while (k + 1 < n && v[k][j] <= v[k + 1][j]) {
        k++;
        w[k] = min(w[k], i);
      }
      k++;
    }
  }

  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int l, h;
    cin >> l >> h;
    l--;
    h--;

    cout << (w[h] <= l ? "Yes" : "No") << endl;
  }

  return 0;
}
