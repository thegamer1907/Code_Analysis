#include<bits/stdc++.h>
using namespace std;

#define all(C) C.begin(),C.end()
#define csize(C) int(C.size())
typedef long long int Long;
typedef long double Double;
const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;

int dp[MAXN];
int t, k;

int get(int size) {
  if(size == 0) return 1;
  if(dp[size] >= 0) return dp[size];

  int &ans = dp[size] = get(size - 1);
  if(size - k >= 0) {
    ans += get(size - k);
    if(ans >= MOD) ans %= MOD;
  }

  return ans;
}

int main() {
  scanf("%d%d", &t, &k);

  memset(dp, -1, sizeof(dp));
  get(MAXN - 1);

  for(int i = 1; i < MAXN; ++i) {
    dp[i] += dp[i - 1];
    if(dp[i] >= MOD) dp[i] %= MOD;
  }

  int a, b;
  while(t--) {
    scanf("%d%d", &a, &b);
    printf("%d\n", (dp[b] - dp[a - 1] + MOD) % MOD);
  }

  return 0;
}