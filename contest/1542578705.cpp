#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <cctype>
#include <ctime>
#include <bitset>

using namespace std;

#define REP(i, n) for (int i = 0; i < (n); ++i)
#define eps 1e-9

typedef long long ll;
typedef pair<int, int> pii;

const int INF = 0x7fffffff;
const int maxn = 1e5 + 10;
int n, k, a, t;
bool vis[maxn];
bool flag = false;

int main() {
#ifdef __AiR_H
    freopen("C.in", "r", stdin);
//    freopen("out.txt", "w", stdout);
#endif // __AiR_H
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        t = 0;
        for (int j = 1; j <= k; ++j) {
            scanf("%d", &a); if (!a) { continue; }
            t |= (1 << (j - 1));
        }
        vis[t] = true;
    }
    for (int i = 0; i < (1 << k); ++i) {
        for (int j = 0; j < (1 << k); ++j) {
            if (!vis[i] || !vis[j]) { continue; }
            if ((i & j) == 0) { flag = true; }
        }
    }
    if (flag) { printf("YES\n"); } else { printf("NO\n"); }
#ifdef __AiR_H
    printf("Time used = %.2fs\n", (double)clock() / CLOCKS_PER_SEC);
#endif // __AiR_H
    return 0;
}
