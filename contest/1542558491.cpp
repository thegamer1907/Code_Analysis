#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pii;
                    
const int MAXK = 21;
const int MAXN = 1e5 + 5;
const long long LINF = 1e18;

int n, k;
long long dp[MAXK][MAXN];
int a[MAXN];
int cnt[MAXN];
long long val;
int lt, rt;

inline void add(int x) {
  val += cnt[x]++;
}

inline void remove(int x) {
  val -= --cnt[x];
}

void shift(int l, int r) {
  while (lt > l) {
    add(a[lt--]);
  }
  while (rt < r) {
    add(a[++rt]);
  }
  while (lt < l) {
    remove(a[++lt]);
  }
  while (rt > r) {
    remove(a[rt--]);
  }
}

int calc_dp(int num, int i, int optl, int optr) {
  int res = -1;
  shift(optr, i);
  dp[num][i] = LINF;
  for (int j = optr; j >= optl; --j) {
    if (dp[num - 1][j] + val <= dp[num][i]) {
      dp[num][i] = dp[num - 1][j] + val;
      res = j;
    }
    add(a[lt--]);
  }
  return res;
}

void calc(int num, int l, int r, int optl, int optr) {
  if (l > r) return;
  int mid = (l + r) >> 1;
  int optm = calc_dp(num, mid, optl, optr);
  calc(num, l, mid - 1, optl, optm);
  calc(num, mid + 1, r, optm, optr);
}

int main() {
#ifdef LOCAL
  freopen("input", "r", stdin);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(0); 
  cin >> n >> k;
  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
    dp[0][i] = LINF;
  }
  lt = n;
  rt = n;
  for (int i = 1; i <= k; ++i) {
    calc(i, 1, n, 0, n - 1);
  }
  cout << dp[k][n] << endl;
  return 0;
}