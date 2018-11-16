#include<bits/stdc++.h>

using namespace std;

int main (void) {
  vector<int> arr;
  int n, e, n1s = 0, ans = -200, dp[101][101] = {0};

  scanf("%d\n", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d\n", &e);
    if (e == 1) n1s++;
    arr.push_back(e);
  }

  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      dp[i][j] = arr[j] == 0 ? 1 : -1;
      if (i != j) dp[i][j] += dp[i][j - 1];
      if (dp[i][j] > ans) ans = dp[i][j];
    }
  }
  printf("%d\n", n1s + ans);

  return 0;
}
