#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  string s;
  cin >> s;
  s = "00" + s;
  int i, j, k;
  for (i = 0; i < s.length(); i++) for (j = i + 1; j < s.length(); j++) for (k = j + 1; k < s.length(); k++) {
    int t = s[i] * 100 + s[j] * 10 + s[k] - '0' * 111;
    if ((t & 7) == 0) {
      printf("YES\n%d\n", t);
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}
