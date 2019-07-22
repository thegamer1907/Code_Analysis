#include <bits/stdc++.h>
using namespace std;

#define fo1(i, n) for (int i = 0; i < n; i++)
#define rep(i, l, r) for (int i = l; i < r; i++)
#define repb(i, r, l) for (int i = r; i > l; i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) int((x).size())
using ll = long long; using vi = vector<int>; using ii = pair<int,int>;
template <typename A, typename B> ostream& operator<<(ostream& os, pair<A,B> p) { return os << '{' << p.first << ", " << p.second << '}'; }
const int oo = 0x3f3f3f3f; const ll OO = ll(oo)*oo; const int N = 100005;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  ll n; cin >> n;
  ll m; cin >> m;
  ll k; cin >> k;
  vector<ll> a(m);
  fo1(i, m)
    cin >> a[i];
  // a[m++] = 2e18;

  sort(all(a)); // acho que nem precisa

  ll s = 0; // shift
  // ll d = 0; // current page delta
  ll ops = 0;
  ll p = 1;
  // fo1(i, m) {
  //   // cout << a[i] << ' ' << a[i]-s << endl;
  //   if (a[i]-s <= k*p) {
  //     d++;
  //   } else {
  //     // cout << a[i] << ' ' << s << ' ' << d << endl;
  //     if (d != 0)
  //       ops++;
  //     s += d;
  //     d = 0;
  //     if (a[i]-s <= k*p)
  //       i--;
  //     else
  //       p++;
  //   }
  // }

  int i = 0;
  while (i < m && k*p <= n) {
    ll d = 0;
    bool picked = false;
    while (i < m && a[i]-s <= k*p) {
      i++;
      d++;
      picked = true;
    }

    if (picked) {
      ops++;
      s += d;
    } else {
      p++;
    }
  }

  cout << ops << endl;
  return 0;
}