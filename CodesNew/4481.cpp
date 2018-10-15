#include <bits/stdc++.h>

using namespace std;

#define rep(i, a, b) for(ll i = ll(a); (i) < ll(b); (i)++)
#define trav(i, v) for(auto& i: v)
#define MOD (1000000007)
#define all(x) x.begin(), x.end()
#define sz(x) ll((x).size())

typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;

int main() {
  ll n;
  scanf("%lld", &n);
  vi v(n);
  trav(i, v) scanf("%lld", &i);
  sort(v.rbegin(), v.rend());
  vector<bool> used(n, false);
  int j = n/2;
  ll ans = 0;
  rep(i,0,n) {
    if(used[i]) continue;
    used[i] = true;
    while(j < n && v[j]*2 > v[i]) j++;
    if(j < n) {
      used[j] = true;
      ans++;
      j++;
    } else {
      break;
    }
  }
  printf("%lld\n", n-ans);
  return 0;
}
