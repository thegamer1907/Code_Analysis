#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, t;
  cin >> n >> t;
  n--;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  t--;
  if (t == n) {
    cout << "YES" << endl;
    return 0;
  }
  for (int i = 0; i < n; i += a[i]) {
    if (i == t) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
