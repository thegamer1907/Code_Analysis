/**
    author:	bandi_on_1900
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, j, n) for (ll i = j; i <= n; i++)
#define per(i, j, n) for (ll i = j; i >= n; i--)
#define ll long long
#define ld long double
#define ld long double
#define ii pair<ll, ll>
#define vii vector<ii>
#define vi vector<ll>
#define adj unordered_map<ll, vii>
#define MOD 1000000007

ll n, m, k;

void solve() {
  // Code goes here
  cin >> n >> m >> k;
  vi p(m);
  queue<ll> q;
  rep(i, 0, m - 1) cin >> p[i];
  rep(i, 0, m - 1) q.push(p[i]);
  ll ans = 0;
  ll first = k;
  while (!q.empty()) {
    ll cnt = 0;
    while (!q.empty() && q.front() <= first) {
      ++cnt;
      q.pop();
    }
    if (cnt) {
      ++ans;
      first += cnt;
    } else
      first += k;
  }
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  solve();
}