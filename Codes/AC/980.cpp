#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<int, ll> pil;
typedef pair<ll, int> pli;
typedef pair<ll, ll> pll;
typedef pair<db, db> pdd;

const int MOD = 1000000007;
const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const db PI = acos(-1);
const db EPS = 1e-10;
const int N = 100010;

int n, k;
int a[N];
int dp[N][2];
int f[N];

int lowerBound(int pos, int c, int limit) {
  int res = -1, low = 1, high = pos;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (dp[pos][c] - dp[mid - 1][c] <= limit) {
      res = mid;
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return res;
}

int main() {
  // freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n >> k;
  for (int i = 1; i <= n; ++i) {
    char c;
    cin >> c;
    a[i] = c - 'a';
    dp[i][a[i]] = dp[i - 1][a[i]] + 1;
    dp[i][!a[i]] = dp[i - 1][!a[i]];
  }
  f[1] = 1;
  for (int i = 2; i <= n; ++i) {
    f[i] = 1;
    int pos;
    pos = lowerBound(i - 1, !a[i], k);
    if (pos != -1) {
      f[i] = max(f[i], i - pos + 1);
    }
    pos = lowerBound(i - 1, a[i], k - 1);
    if (pos != -1) {
      f[i] = max(f[i], i - pos + 1);
    }
  }
  cout << *max_element(f + 1, f + n + 1);
}
