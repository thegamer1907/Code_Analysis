#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  string s;
  int n;
  cin >> s >> n;
  set<char> s1, s2;
  for (int i = 0; i < n; i++) {
    string t;
    cin >> t;
    if (t.find(s) != string::npos) {
      cout << "YES" << endl;
      return 0;
    }
    s1.insert(t[0]);
    s2.insert(t.back());
  }
  cout << (s2.count(s[0]) && s1.count(s[1]) ? "YES" : "NO") << endl;
  return 0;
}
