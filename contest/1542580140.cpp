#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
int freq[1 << 4];

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n, k; cin >> n >> k;
  for (int i = 0; i < n; i++) {
    int mask = 0;
    for (int j = 0; j < k; j++) {
      int x; cin >> x;
      mask = 2 * mask + x;
    }
    freq[mask]++;
  }
  bool poss = false;
  for (int m1 = 0; m1 < (1 << k); m1++) {
    for (int m2 = 0; m2 < (1 << k); m2++) {
      if ((m1 & m2) == 0 && freq[m1] && freq[m2]) poss = true;
    }
  }
  cout << (poss ? "YES" : "NO") << '\n';
  return 0;
}
