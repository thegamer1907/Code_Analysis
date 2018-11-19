#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#define MAXN 51
#define INF 0x3F3F3F3F
int n, f[MAXN][MAXN][MAXN][MAXN], F[MAXN][MAXN][MAXN][MAXN], dist[MAXN][MAXN];
int m, rt, size[MAXN], cnt[MAXN], ans = INF;
std::vector<int> next[MAXN];
void _(int x, int f) {
    size[x] = cnt[x];
    for (auto y : next[x]) {
        if (y == f) continue;
        _(y, x);
        size[x] += size[y];
    }
}
int g(int x, int fa, int in, int out) {
    if (!(in || out)) return 0;
    if (F[x][fa][in][out]) return f[x][fa][in][out];
    F[x][fa][in][out] = 1;
    if (next[x].size() == 1) {
        if (out == 0) return F[x][fa][in][out] = f[x][fa][in][out] = 0;
        return f[x][fa][in][out] = g(fa, x, out, 0) + dist[x][fa];
    }
    int tmp[MAXN];
    memset(tmp, 0x80, sizeof(tmp));
    tmp[0] = INF;
    for (auto y : next[x]) {
        if (y == fa) continue;
        for (int i = in; i; i--) {
            for (int j = 1; j <= i; j++) {
                tmp[i] = std::max(tmp[i], std::min(tmp[i - j], g(y, x, j, in + out - j) + dist[x][y]));
            }
        }
    }
    return f[x][fa][in][out] = tmp[in];
}

int main() {
    scanf("%d", &n);
    for (int i = 1, x, y, z; i < n; i++) {
        scanf("%d%d%d", &x, &y, &z);
        next[x].push_back(y);
        next[y].push_back(x);
        dist[x][y] = dist[y][x] = z;
    }
    scanf("%d", &rt);
    scanf("%d", &m);
    for (int i = 1, x; i <= m; i++) {
        scanf("%d", &x);
        cnt[x]++;
    }
    _(rt, 0);
    for (auto x : next[rt]) {
        ans = std::min(ans, g(x, rt, size[x], m - size[x]) + dist[rt][x]);
    }
    printf("%d\n", ans == INF ? -1 : ans);
    return 0;
}