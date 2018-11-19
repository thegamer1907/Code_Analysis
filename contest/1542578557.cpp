#include <bits/stdc++.h>
using namespace std;
#define int long long
#define boost() ios_base :: sync_with_stdio(0); cin.tie(); cout.tie(); cout << fixed; cout << setprecision(15); srand(time(NULL))
#define pb push_back
#define mp make_pair
#define endl '\n'

int n, k, cnt[33];

signed main() {
  boost();
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    int num = 0;
    for (int j = 0; j < k; j++) {
      int s;
      cin >> s;
      num |= (s << j);
    }
    if (num == 0) {
      cout << "YES" << endl;
      return 0;
    }
    cnt[num] = 1;
  }
  for (int i = 1; i < 16; i++) {
    if (cnt[i] == 0) continue;
    vector <int> v;
    for (int j = 0; j < 4; j++) {
      if (i & (1 << j)) v.pb(j);
    }
    for (int j = 0; j < 16; j++) {
      if (cnt[j] == 0) continue;
      bool ok = 1;
      for (auto x : v) {
        if ((1 << x) & j) ok = 0;
      }
      if (ok) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}
