#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
const ll INF = 0x3f3f3f3f;
bool vis[20];

int main() {
  cin.sync_with_stdio(0);
  // cin.tie(nullptr);
  int n, k, a, b;
  cin >> n >> k;
  while (n--) {
    a = 0;
    for (int i=0; i<k; i++) {
      cin >> b;
      a = (a<<1) + b;
    }
    vis[a] = true;
    // int c = a ^ ((1<<k) - 1);
    // for (int sub = c; sub; sub = (sub-1) & c) {
    //   if (vis[sub]) {
    //     cout << "YES\n";
    //     return 0;
    //   }
    // }
  }
  for (int i=0; i<20; i++) {
    if (vis[i]) {
      for (int j=0; j<20; j++) {
        if (vis[j] && !(i&j)) {
          cout << "YES\n";
          return 0;
        }
      }
    }
  }
  cout << "NO\n";
  return 0;
}