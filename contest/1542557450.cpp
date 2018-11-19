#include <cstdio>
using namespace std;
char s[10];
char a[150][10];
int main() {
  int n;
  scanf("%s", s);
  scanf("%d", &n);
  for (int i = 1; i <= n; ++i)
    scanf("%s", a[i]);
  bool flag = 0;
  for (int i = 1; i <= n; ++i)
    if (a[i][0] == s[0] && a[i][1] == s[1]) flag = 1;
  for (int i = 1; i <= n; ++i)
    for (int j = 1; j <= n; ++j)
      if (a[i][0] == s[1] && a[j][1] == s[0]) flag = 1;
  if (flag) puts("YES");
  else puts("NO");
}
