#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define forn(i,n) for(int i = 0; i < (int) n; i++)
#define ios ios::sync_with_stdio(false); cin.tie(0);  cout.tie(0)

#define mod 1000000007
#define mult 1933

using namespace std;
typedef long long ll;

vector<ll> h, pw;

ll gethash(int l, int r) {
  return ((h[r + 1] - h[l] * pw[r - l + 1]) % mod + mod) % mod;
}

int main() {
  ios;

  string s;
  cin >> s;
  int n = s.size();

  h.resize(n + 1);
  // h[x] = hash of [0,x-1]
  forn(i, n) h[i + 1] = ((h[i] * mult) + (s[i] - 'a')) % mod;

  pw.resize(n + 1);
  pw[0] = 1;
  forn(i, n) pw[i + 1] = (pw[i] * mult) % mod;

  vector<int> posans{0};
  for(int i=1;i<=n;i++){
    ll h1 = gethash(0,i-1);
    ll h2 = gethash(n-i,n-1);

    if (h1 == h2) posans.push_back(i);
  }

  int ans = -1;

  int lo = 0, hi = posans.size();

  while(lo + 1 < hi) {
    int mid = (lo + hi) / 2;
    int sz = posans[mid];

    bool pos = 0;

    for (int m = 1; !pos && m < n-1 && m+sz-1 < n-1; m++) {
      //[0,sz-1] matches [m, m+sz-1] matches [n-sz, n-1]
      ll h1 = gethash(0, sz - 1);
      ll h2 = gethash(m, m + sz - 1);

      pos = pos || h1 == h2;
    }

    if (pos)
      lo = mid;
    else
      hi = mid;
  }

  if (!posans[lo])
    cout << "Just a legend\n";
  else
    cout << s.substr(0, posans[lo]) << "\n";
}
