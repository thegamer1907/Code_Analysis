#include <bits/stdc++.h>

using namespace std;

const int N = 123456;

int n, k;
string s;
int dp[N][2];

int lower_bound(int pos, int t, int key) {
  int res = -1, low = 0, high = pos;
  while (low <= high) {
    int mid = (low + high) >> 1;
    if (dp[mid][t] >= key) {
      res = mid;
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> n >> k >> s;
  s = '~' + s;
  int ans = 0;
  for (int i = 1; i <= n; ++i) {
    for (int j = 0; j < 2; ++j) {
      dp[i][j] = dp[i - 1][j] + (s[i] - 'a' == j);
    }
    for (int j = 0; j < 2; ++j) {
      int pos = lower_bound(i, j, dp[i][j] - k);
      if (pos == -1) {
        pos = 0;
      }
      ans = max(ans, i - pos);
    }
  }
  cout << ans << '\n';
  return 0;
}