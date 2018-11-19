#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;

#define REP(i, a, b) for(int i = a; i < b; i++)
#define PER(i, a, b) for(int i = b-1; i >= a; i--)

const int maxn = 100000 + 10;
const int maxk = 5;

int n, k, a[maxn][maxk], cnth[maxn], cntl[maxk], bit[maxn];
bool vis[20];

int main()
{
    scanf("%d%d", &n, &k);
    REP(i, 0, n) {
        int x = 0;
        REP(j, 0, k) {
            int t; scanf("%d", &t);
            if(t) {
                x |= (1 << j);
                cnth[i]++;
                cntl[j]++;
            }
        }
        bit[i] = x;
        vis[x] = true;
    }

    REP(i, 0, k) if(cntl[i] == n) {
        printf("NO\n");
        return 0;
    }

    int minc = k + 1, index = -1;
    REP(i, 0, n) if(cnth[i] < minc) { minc = cnth[i]; index = i; }
    if(minc == 0) { printf("YES\n"); return 0; }

    int all = (1<<k)-1;
    if(k == 4) {
        if(minc >= 3) { printf("NO\n"); return 0; }
        if(minc == 1) {
            printf("YES\n");
            return 0;
        }
        REP(i, 0, n) if(cnth[i] == 2) {
            if(vis[all ^ bit[i]]) { printf("YES\n"); return 0; }
        }
        printf("NO\n");
        return 0;
    }

    if(k == 3) {
        if(minc >= 2) { printf("NO\n"); return 0; }
        printf("YES\n");
        return 0;
    }

    if(k == 2) {
        printf("YES\n");
        return 0;
    }

    printf("YES\n");

    return 0;
}
