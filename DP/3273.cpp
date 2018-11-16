#include <bits/stdc++.h>

using namespace std;

class fenwick {
 private:
  int n;
  vector<int> fenw;

 public:
  fenwick(int n) : n(n) {
    fenw.assign(n + 1, 0);
  }

  void modify(int x, int v = 1) {
    for (; x <= n; x += x & -x) {
      fenw[x] += v;
    }
  }

  int get(int x) {
    int res = 0;
    for (; x > 0; x -= x & -x) {
      res += fenw[x];
    }
    return res;
  }

  inline int query(int l, int r) {
    return get(r) - get(l - 1);
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  vector<int> last((int) 1e7 + 1);
  for (int i = 0; i <= 1e7; ++i) {
    last[i] = i;
  }
  for (int i = 2; i * i <= (int) 1e7; ++i) {
    if (last[i] == i) {
      for (int j = i; j * i <= (int) 1e7; ++j) {
        last[j * i] = i;
      }
    }
  }
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  fenwick fenw((int) 1e7);
  for (int x : a) {
    while (x > 1) {
      fenw.modify(last[x]);
      int p = last[x];
      while (x % p == 0) {
        x /= p;
      }
    }
  }
  int m;
  cin >> m;
  while (m--) {
    int l, r;
    cin >> l >> r;
    l = min(l, (int) 1e7);
    r = min(r, (int) 1e7);
    cout << fenw.query(l, r) << '\n';
  }
  return 0;
}