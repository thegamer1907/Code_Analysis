#include <bits/stdc++.h>

using namespace std;

int n;
string s;
int ff[30], ss[30];

int main() {
  cin >> s >> n;
  while (n--) {
    string x;
    cin >> x;
    if (x == s) {
      puts("YES");
      return 0;
    }
    ++ff[x[0] - 'a'];
    ++ss[x[1] - 'a'];
  }
  if (ss[s[0] - 'a'] > 0 and ff[s[1] - 'a'] > 0) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  return 0;
}

