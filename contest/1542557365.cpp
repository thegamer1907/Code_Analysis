#include <cstdio>
#include <set>
#include <cstring>
#include <algorithm>
using namespace std;

char s[105][105];
char pre[205][10], nxt[205][10];
set<int> S[205][10];
int main() {
//  freopen("in.in", "r", stdin);
  int n = 0, q, a, b;
  scanf("%d", &n);
  for (int i = 1; i <= n; ++i) {
    scanf("%s", s[i]);
    int m = strlen(s[i]);
    for (int j = 0; j < m; ++j)
      for (int k = j; k < j + 9 && k < m; ++k) {
        int len = k - j + 1, t = 0;
        for (int l = j; l <= k; ++l)
          t += ((s[i][l] - '0') << (l - j));
        S[i][len].insert(t);
      }
    for (int j = 0; j < 8 && j < m; ++j)
      pre[i][j] = s[i][j];
    int l = 0;
    for (int j = max(0, m - 8); j < m; ++j)
      nxt[i][l++] = s[i][j];
  }
  scanf("%d", &q);
  while (q--) {
    scanf("%d%d", &a, &b);
    n++;
    for (int i = 1; i <= 9; ++i)
      for (set<int>::iterator it = S[a][i].begin(); it != S[a][i].end(); ++it)
        S[n][i].insert(*it);
    for (int i = 1; i <= 9; ++i)
      for (set<int>::iterator it = S[b][i].begin(); it != S[b][i].end(); ++it)
        S[n][i].insert(*it);
    int pa = strlen(pre[a]);
    int na = strlen(nxt[a]);
    int pb = strlen(pre[b]);
    int nb = strlen(nxt[b]);
    int m = 0;
    if (nb < 8)
      for (int i = max(0, na - (8 - nb)); i < na; ++i)
        nxt[n][m++] = nxt[a][i];
    for (int i = max(0, nb - 8); i < nb; ++i)
      nxt[n][m++] = nxt[b][i];
    m = 0;
    for (int i = 0; i < 8 && i < pa; ++i)
      pre[n][m++] = pre[a][i];
    if (m < 8)
      for (int i = 0; i < pb && m < 8; ++i)
        pre[n][m++] = pre[b][i];
    for (int i = max(0, na - 8); i < na; ++i) {
      int t = 0;
      for (int k = i; k < na; ++k)
        t += ((nxt[a][k] - '0') << (k - i));
      for (int j = 0; j < pb && j < 8; ++j) {
        int l = j + 1 + na - i;
        if (l > 9) continue;
        int t1 = t;
        for (int k = 0; k <= j; ++k)
          t1 += ((pre[b][k] - '0') << (na - i + k));
        S[n][l].insert(t1);
      }
    }
    for (int i = 9; i >= 0; --i)
      if (!i || (S[n][i].size() == (1 << i))) { printf("%d\n", i); break; }
  }
  return 0;
}
