#include <bits/stdc++.h>
using namespace std;
const int di[2] = {1, 0};
const int dj[2] = {0, 1};
const int MAX_H = 505, MAX_W = 505;

int res[2][MAX_H][MAX_W];
char grid[MAX_H][MAX_W];

int main() {
    int h, w, q, r1, c1, r2, c2, cnt;
    scanf("%d%d", &h, &w);
    for (int i = 1; i <= h; i++) scanf("%s", grid[i] + 1);
    for (int k = 0; k < 2; k++)
        for (int i = 1; i <= h - di[k]; i++) {
            res[k][i][0] = res[k][i - 1][w - dj[k]];
            for (int j = 1; j <= w - dj[k]; j++)
                res[k][i][j] = res[k][i][j - 1]
                             + (grid[i][j] == '.' && grid[i + di[k]][j + dj[k]] == '.');
        }
    scanf("%d", &q);
    while (q--) {
        cnt = 0;
        scanf("%d%d%d%d", &r1, &c1, &r2, &c2);
        for (int k = 0; k < 2; k++)
            for (int i = r1; i < r2 + k; i++) 
                cnt += res[k][i][c2 - k] - res[k][i][c1 - 1];
        printf("%d\n", cnt);
    }
}