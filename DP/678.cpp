#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
string s;
ll d;

struct node {
  ll l, r, v;
};

node A[52525];
vector<ll> B, S;

ll f(ll l, ll r, ll n) {
  if (A[n].l == l and A[n].r == r) {
    return A[n].v;
  }

  if (l >= A[(n*2)+1].l) return f(l, r, (n*2)+1);
  if (r <= A[n*2].r) return f(l, r, n*2);
  return f(A[(n*2)+1].l, r, (n*2)+1) + f(l, A[n*2].r, n*2);
}

int main() {
  ll l, r, n, m = 1;
  cin >> s >> n;
  // while (m < s.length()) m = m << 1;
  // for (ll i = 0; i <= m; i++) {
  //   if (i < s.length()) A[m+i-1].v = s[i-1] == s[i];
  //   A[m+i-1].l = A[m+i-1].r = i+m-1;
  // }

  // m <<= 1;
  // d = m;
  // while (m >>= 1) {
  //   for (ll i = m; i < m << 1; i+=2) {
  //     A[i/2].v = A[i].v + A[i+1].v;
  //     A[i/2].l = A[i].l;
  //     A[i/2].r = A[i+1].r;
  //   }
  // }

  m = s.length()-1;
  B.resize(m+1);
  S.resize(m+1);
  for (int i = 1; i <= m; i++)
    B[i] = s[i] == s[i-1];

  S[0] = B[0];
  for (int i = 1; i <= m; i++)
    S[i] = S[i-1] + B[i];

  for (ll i = 0; i < n; i++) {
    cin >> l >> r;
    // cout << f(((d >> 1) - 1) + l, (((d >> 1) - 1) + r)-1, 1) << '\n';
    cout << S[r-1] - S[l-1] << '\n';
  }
}