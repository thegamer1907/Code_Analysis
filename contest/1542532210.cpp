#include <bits/stdc++.h>
using namespace std;
#define N 105
#define M 205
#define K 530
#define f1(i, a, b) for (int i = a; i <= b; i ++)
#define f0(i, a, b) for (int i = a; i < b; i ++)

char s[N];
bool vis[M][10][K];
char pr[M][20], sf[M][20];

int main() {
	int n, m, x, y;
	scanf("%d", &n);
    int len, now, up;
    f1(i, 1, n) {
		scanf("%s", s);
		len = strlen(s);
        f0(j, 0, len) {
            now = 0, up = min(len - j, 9);
            f0(k, 0, up) {
                now = now * 2 + s[j + k] - '0';
                vis[i][k][now] = 1;
            }
		}
        up = min(len, 9);
        f0(j, 0, up) pr[i][j] = s[j];
        f0(j, 0, up) sf[i][j] = s[len - (up - j)];
	}
	scanf("%d", &m);
    f1(i, 1, m) {
        scanf("%d %d", &x, &y);
        f0(j, 0, K) f0(u, 0, 10) vis[i + n][u][j] = vis[x][u][j] | vis[y][u][j];
        strcpy(s, sf[x]);
        strcat(s, pr[y]);
		len = strlen(s);
        f0(j, 0, len) {
			now = 0, up = min(len - j, 9);
            f0(k, 0, up) {
				now = now * 2 + s[j + k] - '0';
                vis[i+n][k][now] = 1;
            }
        }
        strcpy(pr[i+n], pr[x]); strcat(pr[i+n], pr[y]);
        pr[i+n][9] = 0;
        len = min(9 - strlen(sf[y]), strlen(sf[x]));
        strcpy(sf[i+n], sf[x] + strlen(sf[x]) - len);
        strcat(sf[i+n], sf[y]);
        int j, k;
        for (j = 1; j <= 10; j ++) {
            up = 1 << j;
            for (k = 0; k < up; k ++) if (!vis[i+n][j-1][k]) break;
            if (k < up) break;
        }
        printf("%d\n", j - 1);
    }
}
