#pragma comment(linker, "/stack:20000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,sse3,sse4,popcnt,abm,mmx")

#include <bits/stdc++.h>

#define f first
#define s second

#define pb push_back
#define pp pop_back
#define mp make_pair

#define sz(x) (int)x.size()
#define sqr(x) ((x) * 1ll * (x))
#define all(x) x.begin(), x.end()

#define rep(i, l, r) for (int i = l; i <= r; i++)
#define per(i, l, r) for (int i = l; i >= r; i--)

#define dbg(x) cerr << (#x) << " --> " << (x) << nl;
#define Kazakhstan ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0);

#define nl '\n'
#define ioi exit(0);

using namespace std;

#ifdef superset
  #include <ext/pb_ds/assoc_container.hpp>
  #include <ext/pb_ds/tree_policy.hpp>
  #include <ext/pb_ds/detail/standard_policies.hpp>

  using namespace __gnu_pbds;
  typedef tree < pair <int, int>, null_type, less < pair <int, int> >, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#endif

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

const int N = 5e5 + 7, inf = 1e9 + 7, mod = 1e9 + 7;
const ll linf = (ll)1e18 + 7;
const int dx[] = {-1, 0, 1, 0, 1, -1, -1, 1}, dy[] = {0, 1, 0, -1, 1, -1, 1, -1};

int get_int() {
  char x = getchar();
  bool mns = 0;
  while (!isdigit(x)) mns |= x == '-', x = getchar();
  int res = 0;
  while (isdigit(x)) res = res * 10 + x - '0', x = getchar();
  if (mns) res = -res;
  return res;
}
void add(int &x, int y) {
  x += y;
  if (x >= mod) x -= mod;
  if (x < 0) x += mod;
}
int mult(int x, int y) {
  return x * 1ll * y % mod;
}
int sum(int x, int y) {
  add(x, y);
  return x;
}

int n;
string s;
string k[N];
void solve() {
  cin >> s >> n;
  rep(i, 1, n) {
    cin >> k[i];
    if (k[i] == s) {
      cout << "YES\n";
      ioi
    }
  }
  rep(i, 1, n) {
    rep(j, 1, n) {
      if (i == j) continue;
      if (k[i].back() == s[0] && k[j][0] == s[1]) {
        cout << "YES";
        ioi
      }
    }
  }
  reverse(all(s));
  rep(i, 1, n) {
    if (k[i] == s) {
      cout << "YES";
      ioi
    }
  }
  cout << "NO";
}
int main() {
  #ifdef IOI2018
    #define Toktama ""
    freopen (Toktama".in", "r", stdin);
    //freopen (Toktama".out", "w", stdout);
  #endif
  int T = 1;
  while (T--)
    solve();
  ioi
}
