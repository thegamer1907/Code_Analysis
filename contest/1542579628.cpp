#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  #ifdef Zonda_R
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
  #endif
  long long h, m, s, t1, t2;
  cin >> h >> m >> s >> t1 >> t2;
  
  h = h * 5 % 60;
  t1 = t1 * 5 % 60;
  t2 = t2 * 5 % 60;

  long long tt = h * 3600 + m * 60 + s;
  long long mod = 3600 * 60;

  h = tt;
  m = tt * 60 % mod;
  s = tt * 3600 % mod;

  t1 = t1 * 3600 % mod;
  t2 = t2 * 3600 % mod;
  
  bool check = false;
  for(long long i = t1; ; ++i) {
    i %= mod;
    if(i == t2) { 
      check = true; break; 
    }
    if((i == h || i == m || i == s) && i != t1) break;
  }
  for(long long i = t1; ; --i) {
    i = (i + mod) % mod;
    if(i == t2) {
      check = true; break;
    }
    if((i == h || i == m || i == s) && i != t1) break;
  }
  if(check) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}