#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  string s;
  cin >> s;
  if (s.find("AB") != string::npos && s.find("BA") != string::npos && (s.find("AB") + 1 < s.rfind("BA") || s.find("BA") + 1 < s.rfind("AB"))) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
