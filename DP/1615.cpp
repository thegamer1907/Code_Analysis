#include <bits/stdc++.h>
using namespace std;
const int inf = (1 << 30) - 1;

int main() {
  string s; cin >> s; int n = (int)s.length();
  int AB1 = inf, AB2 = 0, BA1 = inf, BA2 = 0;
  for(int i = 0; i < n - 1; ++i) {
    if(s[i] == 'A' && s[i + 1] == 'B') {
      AB1 = min(AB1, i);
      AB2 = max(AB2, i);
    }
    if(s[i] == 'B' && s[i + 1] == 'A') {
      BA1 = min(BA1, i);
      BA2 = max(BA2, i);
    }
  }
  if(AB2 > BA1 + 1 || BA2 > AB1 + 1) cout << "YES\n";
  else cout << "NO\n";
}
