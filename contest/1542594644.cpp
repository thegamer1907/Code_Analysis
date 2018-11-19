#pragma GCC optimize "O3"

#define F first
#define S second

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int main() {
  string s; cin >> s;
  int n; scanf("%d", &n);
  bool h = false, t = false;
  for(int i = 0; i < n; ++i) {
    string str; cin >> str;
    if(str == s) {
      puts("YES");
      return 0;
    }
    if(str[0] == s[1])
      h = true;
    if(str[1] == s[0])
      t = true;
  }
  puts(h && t ? "YES" : "NO");
}
