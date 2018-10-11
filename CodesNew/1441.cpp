#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll cb, cs, cc, pb, ps, pc, h, hb, hs, hc;

int main() {
  string s;
  cin >> s;
  for(auto c : s) {
      if (c == 'B')
        cb++;
      if (c == 'S')
        cs++;
      if (c == 'C')
        cc++;
  }
  cin >> hb >> hs >> hc;
  cin >> pb >> ps >> pc;
  cin >> h;
  ll sol = 0, l = 0, r = 1e13;
  while (r > 1+l) {
    ll mid = (l+r) >> 1;
    ll nb = max(0 * 1LL, (mid * cb - hb) * pb);
    ll ns = max(0 * 1LL, (mid * cs - hs) * ps);
    ll nc = max(0 * 1LL, (mid * cc - hc) * pc);
    if (nb + ns + nc > h) {
      r = mid;
    }
    else {
      l = mid;
      sol = mid;
    }
  } 
  cout << sol << endl;
  return 0;
}
