#include <bits/stdc++.h>
using namespace std;
#define N 100100
#define M 222
#define K 16
#define inf 1000000000
#define eps 1e-7
#define pi acos(-1)
#define gc getchar
#define pc putchar
#define pb push_back

typedef pair<int, int> pii;
typedef long long ll;

template <class T>
inline void chkmax(T &x, T y) {if (x < y) x = y;}

template <class T>
inline void chkmin(T &x, T y) {if (x > y) x = y;}

int n, m, a, b, t[K+1];
char f[M][M], s[M][M], tmp[M];
bool vis[M][N], k[M];

void make(int i) {
    int len = strlen(s[i]), nn;
    for (int j = 0; j < len; j ++) {
        nn = 0;
        for (int k = 0; k < K && j + k < len; k ++) {
            nn = nn * 2 + s[i][j+k] - '0';
            vis[i][nn+t[k+1]] = 1;
        }
    }
}

int ans(int i) {
    int j = 2;
    while (vis[i][j]) j ++;
    return 30 - __builtin_clz(j);
}

int main() {
    //freopen("1.in", "r", stdin);
    //freopen("11.out", "w", stdout);
    for (int i = 0; i <= K; i ++) t[i] = (1 << i);
    scanf("%d\n", &n);
    for (int i = 0; i < n; i ++)
        gets(f[i]), strcpy(s[i], f[i]), make(i);
    scanf("%d", &m);
    while (m --) {
        scanf("%d %d", &a, &b);
        int la = strlen(f[a-1]), lb = strlen(s[b-1]);
        strcpy(f[n], f[a-1]);
        if (la < K) strcpy(f[n] + la, f[b-1]);
        if (lb < K) strcpy(s[n], s[a-1]), strcpy(s[n] + strlen(s[a-1]), s[b-1]);
        else strcpy(s[n], s[b-1]);
        for (int i = 0; i < N; i ++)
            if (vis[a-1][i] || vis[b-1][i]) vis[n][i] = 1;
        int nn = strlen(s[a-1]);
        strcpy(tmp, s[a-1]), strcpy(tmp + nn, f[b-1]);
        int len = strlen(tmp);
        for (int i = 0; i < len; i ++) {
            nn = 0;
            for (int j = 0; j < K && i + j < len; j ++) {
                nn = nn * 2 + tmp[i+j] - '0';
                vis[n][nn+t[j+1]] = 1;
            }
        }

        printf("%d\n", ans(n));
        n ++;
    }

    return 0;
}
