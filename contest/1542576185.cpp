#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <map>
#include <set>
#define pb push_back
#define MS(x, y) memset(x, y, sizeof(x))
#define FILER freopen("data.in", "r", stdin)
#define FILEW freopen("data.out", "w", stdout)
using namespace std;
typedef long long LL;

const int maxn = 100;

int vis[maxn];

bool check(int k, int N) {
    if (N == 1) {
        return vis[0];
    }
    int n = (1 << k);
    for (int i = 0; i < n; i ++) {
        if (!vis[i]) continue;
        for (int j = 0; j < n; j ++) {
            if (!vis[j]) continue;
            bool flag = 1;
            for (int w = 0; w < k; w ++) {
                int g1 = (i >> w) & 1;
                int g2 = (j >> w) & 1;
                if (g1 && g2) {
                    flag = 0;
                    break;
                }
            }
            if (flag) return true;
        }
    }
    return false;
}
int main() {
    int n, k;
    while (scanf("%d%d",&n,&k) == 2) {
        MS(vis, 0);
        for (int i = 0; i < n; i ++) {
            int t = 0;
            for (int j = 0; j < k; j ++) {
                int x; scanf("%d",&x);
                t = t * 2 + x;
            }
            vis[t] = 1;
        }
        if (check(k, n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

