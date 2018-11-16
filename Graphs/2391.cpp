#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vector<int> p(n);
  for (auto& ob : p) {
    cin >> ob;
    if (ob != -1) {
      ob--;
    }
  }
  int ans = 0;
  while (true) {
    set<int> roots;
    for (int i = 0; i < n; i++) {
      if (p[i] == -1) {
        roots.insert(i);
        p[i] = -2;
      }
    }

    if (roots.size() != 0) {
      ans++;
    } else {
      break;
    }

    for (int i = 0; i < n; i++) {
      if (p[i] >= 0 && roots.count(p[i]) != 0) {
        p[i] = -1;
      }
    }
  }
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
#ifdef _DEBUG
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
  while (!cin.eof())
#endif
    solve();
  return 0;
}