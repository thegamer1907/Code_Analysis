#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int go(int a, int b) {
  if (a == 0 or b == 0) return 0;
  if (dp[a][b] != -1) return dp[a][b];
  int &ma = dp[a][b] = 0;
  if (a >= 2) ma = max(ma, 1 + go(a - 2, min(100, b + 1)));
  if (b >= 2) ma = max(ma, 1 + go(min(100, a + 1), b - 2));
  return ma;
}
 
int main() {
  ios_base::sync_with_stdio(false); cin.tie(0);
  int a1, a2; cin >> a1 >> a2;
  memset(dp, -1, sizeof(dp));
  cout << go(a1, a2) << '\n';
}
