#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

ll n, k;
vector<ll> v, u;
map<ll, vector<ll>> m;

int main() {
  ios::sync_with_stdio(0);
  cin >> n >> k;
  v.resize(n); u.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    m[v[i]].push_back(i);
  }
  for (int i = 0; i < n; i++) {
    ll goods = m[v[i]*k].end()-upper_bound(m[v[i]*k].begin(), m[v[i]*k].end(), i);
    u[i] = goods;
  }
  for (int i = n-1; i>= 0; i--) {
    if (v[i]%k!=0) {
      u[i] = 0;
      continue;
    }
    ll pos = v[i]/k;
    ll goods = lower_bound(m[pos].begin(), m[pos].end(), i)-m[pos].begin();
    u[i] *= goods;
  }
  
  ll anw = 0;
  for (ll x: u) {
    //cerr << x << ' ';
    anw += x;
  } cerr << endl;
  cout << anw << endl;
}