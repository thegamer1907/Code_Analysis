#include <bits/stdc++.h>
#define FOR(i,n) for(ll i = 0; i < n; ++i)

using namespace std;
typedef long long ll;

int main() {
  ll h, m, s, t1, t2;
  bool b = true, a = true;
  cin >> h >> m >> s >> t1 >> t2;
  m /= 5; s /= 5;
  if (t1 < t2) {
    if (h < t1 || h >= t2) b = false;
    else a = false;
    if (m < t1 || m >= t2) b = false;
    else a = false;
    if (s < t1 || s >= t2) b = false;
    else a = false;
  } else {
    if (h < t2 || h >= t1) a = false;
    else b = false;
    if (m < t2 || m >= t1) a = false;
    else b = false;
    if (s < t2 || s >= t1) a = false;
    else b = false;
  }
  if (b || a)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}