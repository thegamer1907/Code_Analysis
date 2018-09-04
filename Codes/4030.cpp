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

int n, m;
int a[N];
int f[N];
int dp[N];

inline int idx(int i, int j) {
  return i * m + j;
}

int main() {
  // freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n >> m;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      int id = idx(i, j);
      cin >> a[id];
    }
  }
  for (int j = 0; j < m; ++j) {
    f[idx(0, j)] = 1;
  }
  for (int i = 1; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      int up = idx(i - 1, j);
      int cur = idx(i, j);
      if (a[cur] >= a[up]) {
        f[cur] = f[up] + 1;
      } else {
        f[cur] = 1;
      }
    }
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      dp[i] = max(dp[i], f[idx(i, j)]);
    }
  }
  int k;
  cin >> k;
  while (k--) {
    int l, r;
    cin >> l >> r;
    --l, --r;
    int pos = r - dp[r] + 1;
    cout << (pos <= l ? "Yes" : "No") << '\n';
  }
}