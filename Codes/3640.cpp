#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define forn(i,n) for(int i = 0; i < (int) n; i++)
#define ios ios::sync_with_stdio(false); cin.tie(0);  cout.tie(0)

#define inf 10000000000000ll

using namespace std;
typedef long long ll;

ll min(ll a, ll b, ll c) {
  return min(min(a, b), c);
}

int main() {
  string h;
  ll nb, ns, nc, pb, ps, pc, r;

  cin >> h >> nb >> ns >> nc >> pb >> ps >> pc >> r;

  int b = 0, s = 0, c = 0;
  forn(i, h.size()) {
    if (h[i] == 'B') b++;
    else if (h[i] == 'S') s++;
    else c++;
  }

  ll lo = 0, hi = inf;
  while(lo +1 < hi){
    ll mid = (lo + hi)/2;

    ll cost = max(mid*b - nb, 0ll) * pb + max(mid*s - ns, 0ll) * ps + max(mid*c - nc, 0ll) * pc;
    if (cost <= r)
      lo = mid;
    else
      hi = mid;
  }

  cout << lo << "\n";
}
