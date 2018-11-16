#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> find_pattern(string s, string p) {
  int n = s.size();
  int m = p.size();
  vector<int>pos;
  for (int i = 0; i < n - m + 1; ++i) {
    bool found = true;
    for (int j = 0; j < m; ++j) {
      if (!(s[i + j] == p[j])) {
        found = false;
        break;
      }
    }
    if (found) {
      pos.push_back(i);
    }
  }
  return pos;
}

int main() {
  string s;
  cin >> s;
  vector<int>pos_ab = find_pattern(s, "AB");
  vector<int>pos_ba = find_pattern(s, "BA");
  //cout << pos_ab.size() << " " << pos_ba.size() << endl;
  bool ok = false;
  for (const auto& i: pos_ab) {
    for (const auto& j: pos_ba) {
      //cout << i << " " << j << endl;
      if (abs(i - j) > 1) {
        ok = true;
      }
    }
  }
  cout << (ok ? "YES":"NO") << endl;
  return 0;
}