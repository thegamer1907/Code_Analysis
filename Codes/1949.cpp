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
const int N = 200010;

int n, k;
int a[N];
map<int, ll> dp1, dp2;

int main() {
  // freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n >> k;
  ll res = 0;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    if (a[i] % k == 0) {
      res += dp2[a[i] / k];
      dp2[a[i]] += dp1[a[i] / k];
    }
    ++dp1[a[i]];
  }
  cout << res;
}