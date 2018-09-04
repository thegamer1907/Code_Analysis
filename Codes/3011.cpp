#include <bits/stdc++.h>

using namespace std;

void kmp(string &s, vector<int> &p) {
  p[0] = 0;
  int j = 0;
  for (int i = 1; i < p.size(); i++) {
    while (j > 0 && s[i] != s[j]) {
      j = p[j-1];
    }
    if (s[i] == s[j]) {
      j++;
    }
    p[i] = j;
  }
}

int main() {
  string s;
  while (cin >> s) {
    vector<int> p1(s.length()), p2(s.length());
    kmp(s, p1);
    reverse(s.begin(), s.end());
    kmp(s, p2);
    reverse(s.begin(), s.end());
    reverse(p2.begin(), p2.end());

    int pos = 0;
    int l = 0;
    for (int i = 1; i + 1 < s.length(); i++) {
      if (p1[i] == p2[i - p1[i] + 1]) {
        int ll = p1[i];
        if (ll > l) {
          pos = i - ll + 1;
          l = ll;
        }
      }
    }
    cout << (l == 0 ? "Just a legend" : s.substr(pos, l)) << endl;
  }
  return 0;
}
