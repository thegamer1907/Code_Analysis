#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) cin >> a[i];

  int me = *max_element(begin(a), end(a));
  int k = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] < me) {
      k += me - a[i];
    }
  }
  if (k > m) {
    cout << me;
  } else {
    cout << me + (m - k + n - 1) / n;
  }
  cout << ' ';
  cout << me + m;
}
