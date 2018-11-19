# include "bits/stdc++.h"
using namespace std;
int n, k, f[16];
int main(){
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    int sum = 0;
    for (int j = 0; j < k; j++) {
      int x;
      cin >> x;
      sum += (x << j);
    }
    if (sum == 0)
      return 0 * puts("YES");
    f[sum]++;
  }
  for (int i = 0; i < (1 << k); i++) {
    for (int j = 0; j < (1 << k); j++) {
      if (i & j) continue;
      if (f[i] && f[j])
        return 0 * puts("YES");
    }
  }
  puts("NO");
}