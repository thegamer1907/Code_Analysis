#include <bits/stdc++.h>

using namespace std;

bitset<1 << 16> a[201][16];

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  vector<pair<string, string>> b(n);
  auto solve = [](const string& s, int id) {
    for (int i = 0; i < s.size(); i++) {
      int now = 0;
      for (int j = i; j < i + 15 && j < s.size(); j++) {
        now = now * 2 + s[j] - '0';
        a[id][j - i + 1].set(now);
      }
    }
  };
  auto cut1 = [](string s) {
    return s.substr(0, min((int)s.size(), 15));
  };
  auto cut2 = [](string s) {
    return s.substr(max(0, (int)s.size() - 15));
  };
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    solve(s, i);
    b[i] = {cut1(s), cut2(s)};
  }
  int m;
  cin >> m;
  for (int i = n; i < m + n; i++) {
    int x, y;
    cin >> x >> y;
    x--, y--;
    for (int j = 0; j < 16; j++) {
      a[i][j] = a[x][j] | a[y][j];
    }
    solve(b[x].second + b[y].first, i);
    for (int j = 15; j >= 0; j--) {
      bool flag = true;
      for (int k = 0; k < 1 << j; k++) {
        if (!a[i][j][k]) {
          flag = false;
          break;
        }
      }
      if (!j || flag) {
        cout << j << endl;
        break;
      }
    }
    b.push_back({cut1(b[x].first + b[y].first), cut2(b[x].second + b[y].second)});
  }
  return 0;
}
