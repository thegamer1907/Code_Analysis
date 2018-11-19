#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;
  int n;
  cin >> n;

  set<string> a;
  set<string> b;

  bool ok = false;
  for (int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    if (tmp[1] == s[0]) a.insert(tmp);
    if (tmp[0] == s[1]) b.insert(tmp);
    if (tmp == s) ok = true;
  }

  if (ok) {
    cout << "YES" << endl;
    return 0;
  }

  if (a.empty() || b.empty()) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }

  return 0;
}
