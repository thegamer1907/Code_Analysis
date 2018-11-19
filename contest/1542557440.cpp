#include <cstdio>
using namespace std;

bool vis[100];

int main() {
  int h, m, s, t1, t2;
  scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
  h %= 12;
  h *= 5;
  if (m || s) h++;
  t1 %= 12; t2 %= 12;
  t1 *= 5; t2 *= 5;
  if (m % 5 == 0 && s) m ++;
  for (int i = t1; i >= 0; --i) {
    if (i == h || i == m || i == s) break;
    vis[i] = 1;
  }
  if (vis[0]) {
    for (int i = 59; i >= 0; --i) {
      if (i == h || i == m || i == s) break;
      vis[i] = 1;
    }
  }
  for (int i = t1; i <= 59; ++i) {
    if (i == h || i == m || i == s) break;
    vis[i] = 1;
  }
  if (vis[59]) {
    for (int i = 0; i <= 59; ++i) {
      if (i == h || i == m || i == s) break;
      vis[i] = 1;
    }
  }
  if (vis[t2]) puts("YES");
  else puts("NO");
  return 0;
}
