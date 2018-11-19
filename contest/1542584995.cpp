#include <bits/stdc++.h>
#define FOR(i,n) for(ll i = 0; i < n; ++i)

using namespace std;
typedef long long ll;

int main() {
  string w, c;
  bool f = false, s = false;
  ll n;
  cin >> w >> n;
  FOR(i,n) {
    cin >> c;
    if (c == w) {
      f = s = true;
      break;
    }
    if (c[0] == w[1])
      s = true;
    if (c[1] == w[0])
      f = true;
  }
  if (f && s)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}