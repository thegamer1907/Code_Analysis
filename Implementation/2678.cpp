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
  int n; cin >> n;
  vi v(n), ans(n);
  rep(i,0,n) cin >> v[i];
  rep(i,0,n) {
    ans[v[i]-1] = i+1;
  }
  rep(i,0,n) cout << ans[i] << " ";
  cout << endl;
  return 0;
}
