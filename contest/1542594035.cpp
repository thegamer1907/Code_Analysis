#include <bits/stdc++.h>
using namespace std;
#define FOR(i, n) for(int i = 1; i <= n; i++)
#define REP(i, n) for(int i = 0; i < n; i++)
#define MP make_pair
#define FI first
#define SE second
#define VI vector<int>
#define CLR(x) memset(x, 0, sizeof(x))
#define SZ(x) (x.size())

int main() {
#ifdef LOCAL
  freopen("in.txt", "r", stdin);
#endif
  char s[110][10], p[10];
  int n;
  scanf("%s", p);
  scanf("%d", &n);
  bool flag = false;
  FOR (i, n) {
    scanf("%s", s[i]);
    if (strcmp(s[i], p) == 0)
      flag = true;
  }
  if (flag) {
    puts("YES");
    return 0;
  }
  FOR (i, n) {
    FOR (j, n) {
      if (s[i][1] == p[0] && s[j][0] == p[1]) {
        puts("YES");
        return 0;
      }
    }
  }
  puts("NO");
  return 0;
}
