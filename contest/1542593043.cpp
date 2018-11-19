#include <bits/stdc++.h>

using namespace std;

const int MAXN = 128;

int main() {
  ios::sync_with_stdio(false);
  #ifdef Zonda_R
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
  #endif
  string str;
  cin >> str;
  int n;
  cin >> n;
  string s[MAXN];
  bool check = false;
  for(int i = 0; i < n; ++i) {
    cin >> s[i];
    if(s[i] == str || (s[i][0] == str[1] && s[i][1] == str[0])) {
      check = true;
    }
    for(int j = 0; j <= i; ++j) {
      if(s[j][1] == str[0] && s[i][0] == str[1] || 
         s[j][0] == str[1] && s[i][1] == str[0]) { check = true; }
    }
  }
  if(check) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}