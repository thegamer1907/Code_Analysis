#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;

#define fi first
#define se second
#define eb emplace_back
#define all(x) x.begin(), x.end()

int const N = 100 * 1000 + 16;
int const M = 1000 * 1000 * 1000 + 7;

int n, k;
int a[N];
ll v, L = 1, R = 0;
int b[N];
ll dp[21][N];

ll cost(int l, int r) {
  while(R < r) v += b[a[++R]]++;
  while(l < L) v += b[a[--L]]++;

  while(R > r) v -= --b[a[R--]];
  while(l > L) v -= --b[a[L++]];

  return v;
}

void f(int z, int l, int r, int optl, int optr) {
  if(l > r)
    return;

  int m = l+r>>1;
  int opt = optl;
  int lim = min(m, optr+1);

  ll ans = dp[z-1][opt] + cost(opt+1, m);

  for(int i = opt+1; i < lim; ++i) {
    ll x = dp[z-1][i] + cost(i+1, m);

    if(x < ans) {
      ans = x;
      opt = i;
    }
  }

  dp[z][m] = ans;

  f(z, l, m-1, optl, opt);
  f(z, m+1, r, opt, optr);
}

int main() {
  cin.tie(0);
  cin.sync_with_stdio(0);

  cin >> n >> k;
  for(int i = 1; i <= n; ++i) {
    cin >> a[i];
  }

  for(int i = 1; i <= n; ++i) {
    dp[1][i] = cost(1, i);
  }

  for(int i = 2; i <= k; ++i) {
    f(i, i, n, i-1, n);
  }

  cout << dp[k][n];
}