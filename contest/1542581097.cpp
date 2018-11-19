#include <bits/stdc++.h>
using namespace std;
#define LIM 15
typedef bitset<1 << LIM> BS;
struct jer{
  string pref, suff;
  BS d[LIM + 1];
} ss[205];
int strtoint(const string& s) {
  int t = 0;
  for (char c : s) {
    t = t * 2 + c - '0';
  }
  return t;
}
int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    string s;
    cin >> s;
    ss[i].pref = s.substr(0, min(LIM, (int)s.length()));
    ss[i].suff = s.substr(max((int)s.length() - LIM, 0), LIM);
    for (int b = 0; b < s.length(); b++) {
      for (int j = 1; j <= LIM; j++) {
        string u = s.substr(b, j);
        ss[i].d[u.length()].set(strtoint(u));
      }
    }
  }
  int m;
  cin >> m;
  for (int i = n + 1; i <= n + m; i++) {
    int x, y;
    cin >> x >> y;
    string s = ss[x].suff + ss[y].pref;
    string t = ss[x].pref + ss[y].pref;
    ss[i].pref = t.substr(0, min(LIM, (int)t.length()));
    t = ss[x].suff + ss[y].suff;
    ss[i].suff = t.substr(max((int)t.length() - LIM, 0), LIM);
    for (int j = 1; j <= LIM; j++) {
      ss[i].d[j] = ss[x].d[j] | ss[y].d[j];
    }
    for (int b = 0; b < s.length(); b++) {
      for (int j = 1; j <= LIM; j++) {
        string u = s.substr(b, j);
        ss[i].d[u.length()].set(strtoint(u));
      }
    }
    for (int j = LIM; j >= 0; j--) {
      if (j == 0 || (ss[i].d[j].count() == (1 << j))) {
        cout << j << endl;
        break;
      }
    }
  }
  return 0;
}
