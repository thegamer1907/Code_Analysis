#include <bits/stdc++.h>
#define LL long long
using namespace std;
typedef pair<int, int> pii;

const int maxn = 2e5 + 10;
int n, m, k, x, s, mx[maxn];
pii a[maxn], b[maxn];

int main()
{
    scanf("%d%d%d%d%d", &n, &m, &k, &x, &s);
    for (int i = 1; i <= m; i++)
        scanf("%d", &a[i].first);
    for (int i = 1; i <= m; i++)
        scanf("%d", &a[i].second);
    for (int i = 1; i <= k; i++)
        scanf("%d", &b[i].second);
    for (int i = 1; i <= k; i++)
        scanf("%d", &b[i].first);
    sort(b + 1, b + 1 + k);
    for (int i = 1; i <= k; i++)
        mx[i] = max(mx[i - 1], b[i].second);

    LL ans = 1LL * x * n;
    for (int i = 1; i <= m; i++) {
        if (s - a[i].second < b[1].first)
            continue;
        int pos = upper_bound(b + 1, b + 1 + k, pii(s - a[i].second, 2e9 + 10)) - b - 1;
        int cur = n - mx[pos];
        ans = min(ans, 1LL * a[i].first * cur);
    }
    for (int i = 1; i <= m; i++)
        if (a[i].second <= s)
            ans = min(ans, 1LL * a[i].first * n);
    for (int i = 1; i <= k; i++)
        if (b[i].first <= s)
            ans = min(ans, 1LL * (n - b[i].second) * x);
    return !printf("%lld\n", ans);
}

