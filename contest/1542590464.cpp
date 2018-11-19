#include <bits/stdc++.h>

#define sqr(x) ((x)*(x))

using namespace std;

const int N = 100 + 5;
char st[5], rd[N][5];
int n;

void solve() {
  scanf("%s%d", st, &n);
  for (int i = 0; i < n; i++) {
    scanf("%s", rd[i]);
  }
  for (int i = 0; i < n; i++) {
    if (rd[i][0] == st[0] && rd[i][1] == st[1]) {
      puts("YES"); return;
    }
    for (int j = 0; j <= i; j++) {
      if (rd[i][0] == st[1] && rd[j][1] == st[0]) {
        puts("YES"); return;
      }
      if (rd[i][1] == st[0] && rd[j][0] == st[1]) {
        puts("YES"); return;
      }
    }
  }
  puts("NO");
}

int main() {
  solve();
  return 0;
}
