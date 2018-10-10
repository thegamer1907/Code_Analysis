#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
typedef long long ll;

vector<ll> a;
ll n, s;
ll minCost;
vector<ll> b;

// dotazovana funkce pri binarnim vyhledavani
// vhodne dodefinovat zacatek/konec pole jako -INF/+INF
ll fn(ll cnt) {
  if (cnt < 0) return -1;
  if (cnt > n) return 1;

  for (int i = 0; i < n; ++i) {
    b[i] = a[i] + (i + 1)*cnt;
  }
  sort(b.begin(), b.end());
  ll cur = 0;
  for (int i = 0; i < cnt; ++i) {
    cur += b[i];
  }
  if (cur > s) {
    return 1;
  }
  else {
    minCost = cur;
    return 0;
  }
}

// binary search
// nalezne posledni prvek, pro ktery plati, ze je <= val
// napr kdyz hledame maximum nejake funkce omezene podminkou
// vraci (hodnota, index)
// pokud nenalezeno => index == -1
// O( fn * log(n) )
pair<ll,int> rightmostFind(int l, int r, ll val) {
  if (r >= l) {
    const int mid = (r + l) / 2;

    ll res = fn(mid);
    ll resNext = fn(mid + 1);

    if (res <= val && resNext > val) {
      return {res, mid};
    } else if (res > val) {
      return rightmostFind(l, mid - 1, val);
    } else {
      return rightmostFind(mid + 1, r, val);
    }
  }
  // nenalezeno
  return {0, -1};
}

int main() {
  ios_base::sync_with_stdio(false);
  cin >> n >> s;
  a = vector<ll>(n);
  b = vector<ll>(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  auto r = rightmostFind(0, n, 0);
  if (r.second == -1) {
    cout << "not found" << endl;
    cout << "0 0" << endl;
  } else {
    cout << r.second << " " << minCost << endl;
  }

  return 0;
}
