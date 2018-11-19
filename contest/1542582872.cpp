#include <bits/stdc++.h>

using namespace std;


#define MAXN 100001
int n, k, a[MAXN], h[16];
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n >> k;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < k; ++j) {
      int k;
      cin >> k;
      a[i] += k << j;
    }
    h[a[i]]++;
  }
  if (h[0]) {
    cout << "YES" << endl;
    return 0;
  }
  for (int i = 1; i < (1<<k); ++i) {
    for (int j = 1; j < (1<<k); ++j) {
      if (i==j) continue;
      if (!h[i] || !h[j]) continue;
      int l;
      for (l = 0; l < k; ++l) {
        if ((i>>l)&1 && (j>>l)&1) break;
      }
      if (l==k) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}
