#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int n, ans; cin >> n; ans = min(n, 2);
  int x[n], h[n];
  for(int i = 0; i < n; ++i) {
    cin >> x[i] >> h[i];
  }
  for(int i = 1; i < n - 1; ++i) {
    if(x[i] - x[i - 1] > h[i]) ++ans;
    else if(x[i + 1] - x[i] > h[i]) {
      ++ans;
      x[i] += h[i];
    }
  }
  cout << ans << "\n";
}
