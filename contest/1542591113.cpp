#include <bits/stdc++.h>
using namespace std;
#define int long long
#define boost() ios_base :: sync_with_stdio(0); cin.tie(); cout.tie(); cout << fixed; cout << setprecision(15); srand(time(NULL))
#define pb push_back
#define mp make_pair
#define endl '\n'

string s;
int n;
vector <string> p;

signed main() {
  boost();
  cin >> s >> n;
  for (int i = 0; i < n; i++) {
    string str;
    cin >> str;
    p.pb(str);
    if (str == s || (str[0] == s[1] && str[1] == s[0])) {
      cout << "YES" << endl;
      return 0;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      char a = p[i][1];
      char b = p[j][0];
      if (a == s[0] && b == s[1]) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}
