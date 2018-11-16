#include<algorithm>
#include<typeinfo>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<stack>
#include<map>
#include<queue>
#include<set>
#include<iterator>
#include<functional>
#include<bitset>
#include<stack>
#define e exp(1)
#define eps 0.01
#define pi acos(-1)
using namespace std;
typedef long long ll;
const int maxn = 3007, inf = 0x3f3f3f3f;
int f[maxn][4], n, val[maxn], cost[maxn], ans = inf;
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &val[i]);
    for (int i = 1; i <= n; i++) scanf("%d", &cost[i]);
    memset(f, 0x3f, sizeof(f));
    for (int i = 1; i <= n; i++) {
        f[i][1] = cost[i];
        for (int k = 2; k <= 3; k++)
            for (int j = 1; j < i; j++)
                if (val[j] < val[i]) f[i][k] = min(f[i][k], f[j][k - 1] + cost[i]);
    }
    for (int i = 1; i <= n; i++) ans = min(ans, f[i][3]);
    printf("%d\n", ans == inf ? -1 : ans);
    return 0;
}