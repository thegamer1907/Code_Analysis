#include <bits/stdc++.h>

using namespace std;

const int N = 555;

char s[N][N];
int hor[N][N], ver[N][N];

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  for (int i = 1; i <= n; ++i) {
    scanf("%s", s[i] + 1);
  }
  for (int i = 1; i <= n; ++i) {
    for (int j = 2; j <= m; ++j) {
      hor[i][j] = (s[i][j] == '.' && s[i][j - 1] == '.');
    }
  }
  for (int i = 2; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      ver[i][j] = (s[i][j] == '.' && s[i - 1][j] == '.');
    }
  }
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      hor[i][j] += hor[i - 1][j] + hor[i][j - 1] - hor[i - 1][j - 1];
      ver[i][j] += ver[i - 1][j] + ver[i][j - 1] - ver[i - 1][j - 1];
    }
  }
  int q;
  scanf("%d", &q);
  while (q--) {
    int x, y, u, v;
    scanf("%d %d %d %d", &x, &y, &u, &v);
    int ans = 0;
    ans += hor[u][v] - hor[x - 1][v] - hor[u][y] + hor[x - 1][y];
    ans += ver[u][v] - ver[x][v] - ver[u][y - 1] + ver[x][y - 1];
    printf("%d\n", ans);
  }
  return 0;
}