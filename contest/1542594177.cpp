#include <bits/stdc++.h>
using namespace std;
string ss[105];
int main() {
  string s;
  int n;
  cin >> s >> n;
  for (int i = 0; i < n; i++) {
    cin >> ss[i];
    if (ss[i] == s) {
      cout << "YES\n";
      return 0;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (string("") + ss[i][1] + ss[j][0] == s) {
        cout << "YES\n";
        return 0;
      }
    }
  }
  cout << "NO\n";
  return 0;
}
