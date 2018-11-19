#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int n;

string s[103];

int main() {
  cin >> s[0];
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> s[i];
  }

  for (int i = 1; i <= n; i++) {
    if (s[i] == s[0]) {
      puts("YES");
      return 0;
    }
  }

  for (int i = 1; i <= n; i++) {
    if (s[i][1] == s[0][0]) {
      for (int j = 1; j <= n; j++) {
        if (s[j][0] == s[0][1]) {
          puts("YES");
          return 0;
        }
      }
    }
  }
  puts("NO");

  return 0;
}
