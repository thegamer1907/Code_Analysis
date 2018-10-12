#include <bits/stdc++.h>

using namespace std;

const int N = 100005;

int a[N];

int main() {
  int n, t;
  cin >> n >> t;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    a[i] += a[i - 1];
  }
  int ans = 0;
  int cur = 0;
  for(int i = 1; i <= n; i++) {
    while(a[i] - a[cur] > t) {
      cur++;
    }
    ans = max(ans, i - cur);
  }
  cout << ans;
  return 0;
}