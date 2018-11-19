#include <bits/stdc++.h>
using namespace std;
#define popCnt(x) (__builtin_popcountll(x))
typedef long long Long;
typedef long double Double;

bool inRange(int l, int r, int x) {
  if (x <= l) {
    x += 12;
  }
  return x > l && x <= r;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifdef Local
  freopen("test.in", "r", stdin);
#else
#define endl '\n'
#endif

  vector<int> v;
  for (int i = 0; i < 3; ++i) {
    int x;
    cin >> x;
    if (i != 0) {
      x /= 5;
    }
    v.push_back(x);
    v.push_back(x + 12);
  }

  int t1, t2;
  cin >> t1 >> t2;

  sort(v.begin(), v.end());

  for (int i = 0; i + 1 < v.size(); ++i) {
    if (inRange(v[i], v[i + 1], t1) && inRange(v[i], v[i + 1], t2)) {
      cout << "YES";
      return 0;
    }
  }

  cout << "NO";
}

