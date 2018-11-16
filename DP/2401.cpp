#include <bits/stdc++.h>
using namespace std;

int h[200000] = {0};
int main() {
  ios_base::sync_with_stdio(false); cin.tie(0);
  int n, k; cin >> n >> k;
  for (int i = 1; i <= n; ++i) cin >> h[i], h[i] += h[i - 1];
  int ans = 0;
  for (int i = 0; i < n - k + 1; ++i) 
    if (h[ans + k] - h[ans] > h[i + k] - h[i]) 
      ans = i;
  cout << ans + 1 << '\n';
}
