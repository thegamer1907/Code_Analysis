#include <bits/stdc++.h>
using namespace std;
int main() {
  string s; cin >> s;
  int up = 0, low = 0;
  for (int i = 0; i < s.size(); ++i) up += isupper(s[i]) > 0, low += islower(s[i]) > 0;
  for (int i = 0; i < s.size(); ++i) if (up > low) s[i] = toupper(s[i]); else s[i] = tolower(s[i]);
  cout << s << '\n';
}
