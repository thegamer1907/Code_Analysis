#include <iostream>
using namespace std;

int main() {
  int n, k, ans = 0;
  cin >> n >> k;
  int dp[k][n+1];
  for(int i = 0; i <= n; i++) {
    dp[0][i] = 1;
    for(int j = 1; j < k; j++) dp[j][i] = 0;
  }
  for(int i = 1; i < k; i++) {
    dp[i][0] = 1;
    for(int j = 1; j <= n; j++) {
      for(int p = j; p <= n; p += j) {
        dp[i][p] = (dp[i][p] + dp[i-1][j]) % 1000000007;
      }
    }
  }
  for(int i = 1; i <= n; i++) ans = (ans + dp[k-1][i]) % 1000000007;
  cout << ans;
  return 0;
}