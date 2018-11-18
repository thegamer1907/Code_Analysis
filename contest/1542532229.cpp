#include<bits/stdc++.h>
using namespace std;

#define N 55

int d[N][N], dp[N][N], deg[N], fi[N], se[N], p[N], q[N], r[N];

int f(int x) {return x == p[x] ? x : p[x] = f(p[x]);}

int main() {
    int n, i, j, k, l, L, R, tot, s, m, mid;
    scanf("%d", &n);
    for(i = 1; i <= n; i ++) for(j = 1; j <= n; j ++) if(i != j) d[i][j] = 1e9;
    for(i = 1; i < n; i ++) {
        scanf("%d%d%d", &j, &k, &l);
        fi[i] = j;
        se[i] = k;
        d[j][k] = d[k][j] = l;
        deg[j] ++;
        deg[k] ++;
    }
    scanf("%d%d", &s, &m);
    for(i = 1; i <= n; i ++) p[i] = i;
    for(i = 1; i < n; i ++) if(fi[i] != s && se[i] != s) p[f(fi[i])] = f(se[i]);
    for(i = 0; i < m; i ++) {
        scanf("%d", &j);
        q[f(j)] ++;
    }
    for(k = 1; k <= n; k ++)for(i = 1; i <= n; i ++)for(j = 1; j <= n; j ++)
         if(d[i][k] + d[k][j] < d[i][j]) d[i][j] = d[i][k] + d[k][j];
    for(i = 1; i <= m; i ++) for(j = 1; j <= n; j ++) if(deg[j] == 1) {
        L = 0, R = 1e9;
        while(L < R) {
            mid = L + R + 1 >> 1;
            tot = 0;
            for(k = 1; k <= n; k ++) if(deg[k] == 1) {
                l = 0;
                while(l < i && dp[l][k] + d[j][k] < mid) l ++;
                tot += i - l;
            }
            if(tot < i) R = mid - 1;
            else L = mid;
        }
        dp[i][j] = L;
    }
    L = 0, R = 1e9;
    while(L < R) {
        mid = L + R + 1 >> 1;
        for(k = 1; k <= n; k ++) r[k] = 0;
        for(k = 1; k <= n; k ++) if(deg[k] == 1) {
            l = 0;
            while(l < m && dp[l][k] + d[s][k] < mid) l ++;
            r[f(k)] += m - l;
        }
        for(k = 1; k <= n; k ++) if(r[k] < q[k]) break;
        if(k > n) L = mid;
        else R = mid - 1;
    }
    printf("%d\n", L);
    // return 0;
}
