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
  ll p = k*((a[0]-s-1)/k + 1);
  int i = 0;
  ll d = 0;
  while (i < m) {
    d = 0;
    while (i < m && a[i]-s <= p) {
      i++;
      d++;
    }

    // cout << i << ' ' << a[i] << ' ' << d << endl;
    ops++;
    s += d;
    if (i < m) {
      p = k*((a[i]-s-1)/k + 1);
      // cout << a[i]-s << ' ' << p << endl;
    } else {
      break;
    }
  }

  cout << ops << endl;
  return 0;
}