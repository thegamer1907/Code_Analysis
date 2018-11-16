#include <bits/stdc++.h>
using namespace std;

int main() {
  #ifdef Berb
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  int n, t, check[100];
  char s[100];
  cin >> n >> t;
  for (int i = 0;i < n; ++i) {
    cin >> s[i];
  }
  while (t--) {
    for (int i = 0;i < n; ++i) {
      check[i] = 0;
    }
    for (int i = 0; i < n; ++i) {
      if (s[i] == 'B' && s[i + 1] == 'G' && check[i] == 0 && check[i] == 0) {
        s[i] = 'G';
        s[i + 1] = 'B';
        check[i] = 1;
        check[i + 1] = 1;
      }
    }
  }
    for (int i = 0;i < n; ++i) {
      cout << s[i];
    }
}
