#include "bits/stdc++.h"
using namespace std;
typedef long long LL;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int h, m, s; cin >> h >> m >> s;
  int t1, t2; cin >> t1 >> t2;
  pair<int, int> a[5];
  a[0] = make_pair((h % 12) * 3600 + m * 60 + s, 0);
  a[1] = make_pair(m * 720 + s * 12, 0);
  a[2] = make_pair(s * 720, 0);
  a[3] = make_pair((t1 % 12) * 3600, 1);
  a[4] = make_pair((t2 % 12) * 3600, 1);
  sort(a, a + 5);
  bool poss = false;
  for (int i = 0; i < 5; i++) {
    if (a[i].second + a[(i + 1) % 5].second == 2) poss = true;
  }
  cout << (poss ? "YES" : "NO") << '\n';
  return 0;
}
