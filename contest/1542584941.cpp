#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
#define print_var(x) cerr << #x << " = " << x << endl
#define print_array(arr, len) {cerr << #arr << " = "; for (int i = 0; i < len; i++) cerr << arr[i] << " "; cerr << endl;}
#define print_iterable(it) {cerr << #it << " = "; for (const auto &e : it) cerr << e << " "; cerr << endl;}
#else
#define eprintf(...) (void)0
#define print_var(x) (void)0
#define print_array(arr, len) (void)0
#define print_iterable(it) (void)0
#endif

using ll = long long;

bool has[16];

void solve()
{
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        int mask = 0;
        for (int j = 0; j < k; j++)
        {
            int b;
            scanf("%d", &b);
            mask = 2 * mask + b;
        }
        has[mask] = true;
    }
    int sz = 1 << k;

    for (int mask = 1; mask < (1 << sz); mask++)
    {
        int cnt[4] = {};
        int popcnt = 0;
        bool fail = false;

        for (int i = 0; i < sz; i++)
            if (mask & (1 << i))
            {
                if (!has[i])
                    fail = true;
                popcnt++;
                for (int j = 0; j < k; j++)
                    if (i & (1 << j))
                        cnt[j]++;
            }

        for (int j = 0; j < k; j++)
            if (2 * cnt[j] > popcnt)
                fail = true;

        if (!fail)
        {
            puts("YES");
            return;
        }
    }

    puts("NO");
}

int main()
{
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
#endif

    solve();

    eprintf("\n\ntime = %.3lf\n", (double)clock() / CLOCKS_PER_SEC);
}
