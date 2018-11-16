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

int main() {
//   freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int &x : a) {
    cin >> x;
  } 
  set<int> se;
  vector<int> dp(n, 0);
  for (int i = n - 1; i >= 0; --i) {
    dp[i] = i == n - 1 ? 1 : dp[i + 1] + (se.find(a[i]) == se.end());
    se.insert(a[i]);
  }
  while (m--) {
    int l;
    cin >> l;
    cout << dp[l - 1] << '\n';
  }
}