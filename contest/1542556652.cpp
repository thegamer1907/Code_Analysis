#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int N = 1e5 + 10;
#define ll long long

ll dp[N][22], t[N];
int n, k, K, a[N];
ll sum;

void solve(int l, int r, int L, int R) {
  if (l > r) return;
  int mid = l + r >> 1, M;
  for (int i = r; i > mid; --i) sum -= --t[a[i]];
  int p = min(mid, R);
  for (int i = L; i <= p; ++i) {
    sum -= --t[a[i]];
    if (dp[i][k - 1] + sum < dp[mid][k])
      dp[mid][k] = dp[i][k - 1] + sum, M = i;
  }
  sum -= --t[a[mid]];
  for (int i = p; i >= L; --i) sum += t[a[i]]++;
  solve(l, mid - 1, L, M);
  for (int i = L; i < M; ++i) sum -= --t[a[i]];
  for (int i = mid; i <= r; ++i) sum += t[a[i]]++;
  solve(mid + 1, r, M, R);
  for (int i = M - 1; i >= L; --i) sum += t[a[i]]++;
}

int main() {
  memset(dp, 0x3f3f3f3f, sizeof(dp));
  scanf("%d%d", &n, &K);
  dp[0][1] = 0;
  for (int i = 1; i <= n; ++i) {
    scanf("%d", &a[i]);
    sum += t[a[i]]++;
    dp[i][1] = sum;
  }
  for (k = 2; k <= K; ++k)
    solve(1, n, 1, n);
  printf("%I64d\n", dp[n][K]);
  return 0;
}
