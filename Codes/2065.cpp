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

using namespace std;

#define REP(i, n) for (int i = 0; i < (n); ++i)
#define eps 1e-9
#define SZ(x) ((int)x.size())

typedef long long ll;
typedef pair<int, int> pii;
const int INF = 0x7fffffff;
const int maxn = 2e5 + 10;
int n, k;
ll a[maxn];
map<ll, ll> m;
ll key1[maxn], key2[maxn];

int main() {
#ifdef __AiR_H
    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
#endif // __AiR_H
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        scanf("%I64d", &a[i]);
    }
    ll ans = 0;
    for (int i = 1; i <= n; ++i) {
        if (a[i] % k != 0 || m.count(a[i] / k) == 0) { ++m[a[i]]; continue; }
        key1[i] = m[a[i] / k]; ++m[a[i]];
    }
//    for (int i = 1; i <= n; ++i) {
//        printf("%d ", key1[i]);
//    }
//    printf("\n");
    m.clear();
    for (int i = 1; i <= n; ++i) {
        if (a[i] % k != 0 || m.count(a[i] / k) == 0) {
            if (key1[i]) { m[a[i]] += key1[i]; } continue;
        }
        ans += m[a[i] / k];
        if (key1[i]) { m[a[i]] += key1[i]; }
    }
    printf("%I64d\n", ans);
#ifdef __AiR_H
    printf("Time used = %.2fs\n", (double)clock() / CLOCKS_PER_SEC);
#endif // __AiR_H
    return 0;
}
