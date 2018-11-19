#include <bits/stdc++.h>
#define FOR(i,n) for(ll i = 0; i < n; ++i)

using namespace std;
typedef long long ll;

int main() {
  ll n, k, a, val;
  set<ll> pat;
  cin >> n >> k;
  FOR(i,n) {
    FOR(j,k) {
      if (j == 0)
        cin >> val;
      else {
        cin >> a;
        val *= 2;
        val += a;
      }
    }
    pat.insert(val);
  }
  for (const ll p1 : pat)
    for (const ll p2 : pat) {
      if ((p1 & p2) == 0) {
        cout << "YES" << endl;
        return 0;
      }
    }
  
  cout << "NO" << endl;
  return 0;
}