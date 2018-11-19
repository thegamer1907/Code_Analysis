#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
string t[100];
int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  string s; cin >> s;
  int n; cin >> n;
  bool poss = false;
  for (int i = 0; i < n; i++) {
    cin >> t[i];
    if (t[i] == s) poss = true;
    for (int j = 0; j <= i; j++) {
      if (t[i][0] == s[1] && t[j][1] == s[0]) poss = true;
      if (t[j][0] == s[1] && t[i][1] == s[0]) poss = true;
    }
  }
  cout << (poss ? "YES" : "NO") << '\n';
  return 0;
}
