#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define RST(a) memset(a, 0, sizeof(a))
#define RSTV(a, v) memset(a, v, sizeof(a))
#define FOR(i, a, b) for (auto i = (a); i < (b); ++i)
const int INF = 0x3f3f3f3f;
ll m, n, k;
ll a[100005];
ll pos = 0, result = 0;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  scanf("%lld%lld%lld", &n, &m, &k);
  FOR(i, 0, m) scanf("%lld", &a[i]);
  int p = 0;
  while (p < m) {
    ++result;
    while (a[p] > pos + k) pos += k;
    ll tmp = 0;
    while (a[p] && a[p] <= pos + k) {
      ++p;
      ++tmp;
    }
    pos += tmp;
  }
  cout << result;
}