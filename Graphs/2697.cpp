#include <bits/stdc++.h>
using namespace std;
const int dir[4][2] = { {1, 0}, {0, 1}, {-1, 0}, {0, -1} };
char s[505][505];
bool vis[505][505];
int n, m, k;
void dfs(int x, int y) {
    vis[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        int dx = x + dir[i][0];
        int dy = y + dir[i][1];
        if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && !vis[dx][dy] && s[dx][dy] == '.') {
            dfs(dx, dy);
        }
    }
    if (k > 0) {
        s[x][y] = 'X';
        k--;
    }
}
int main() {
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 1; i <= n; i++) scanf("%s", s[i] + 1);
    bool ok = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i][j] == '.' && !vis[i][j]) {
                dfs(i, j);
                ok = 1;
                break;
            }
        }
        if (ok) break;
    }
    for (int i = 1; i <= n; i++) puts(s[i] + 1);
    return 0;
}
