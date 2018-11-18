#include<bits/stdc++.h>
using namespace std;

const int M = (1 << 12);
const int N = 210;

int n, len[N];
bool pf[N][N], sf[N][N];
bool vis[N][M];
char s[N];

int solve(int a, int b) {
    n ++;
    int i, j, k, val, d;
    len[n] = min(len[a] + len[b], 100);
    for(i = 1; i <= len[a]; i ++) pf[n][i] = pf[a][i];
    for(i = len[a] + 1; i <= len[n]; i ++) pf[n][i] = pf[b][i - len[a]];
    for(i = 1; i <= len[n] - len[b]; i ++) sf[n][i] = sf[a][len[a] + len[b] - len[n] + i];
    for(i = len[n] - len[b] + 1; i <= len[n]; i ++) sf[n][i] = sf[b][i + len[b] - len[n]];
    for(i = 0; i < M; i ++) vis[n][i] = vis[a][i] | vis[b][i];
    for(i = 1; i <= len[a]; i ++) for(j = 1; j <= len[b]; j ++) {
        d = len[a] - i + 1 + j;
        if(d > 11) continue;
        val = 0;
        for(k = i; k <= len[a]; k ++) val = 2 * val + sf[a][k];
        for(k = 1; k <= j; k ++) val = 2 * val + pf[b][k];
        vis[n][val | (1 << d)] = 1;
    }
    for(i = 1; ; i ++) for(j = 0; j < (1 << i); j ++) if(!vis[n][j | (1 << i)]) return i - 1;
}

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i ++) {
        scanf("%s", s);
        len[i] = strlen(s);
        for(int j = 1; j <= len[i]; j ++) {
            pf[i][j] = s[j - 1] - '0';
            sf[i][j] = pf[i][j];
        }
        for(int j = 1; j <= len[i]; j ++) {
            for(int k = j, val = 0; k <= min(len[i], j + 10); k ++) {
                val = val * 2 + pf[i][k];
                vis[i][val | (1 << (k - j + 1))] = 1;
            }
        }
    }
    int m, a, b;
    scanf("%d", &m);
    while(m --) {
        scanf("%d%d", &a, &b);
        printf("%d\n", solve(a, b));
    }
}
