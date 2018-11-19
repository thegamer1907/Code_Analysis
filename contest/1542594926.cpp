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

char s[3];
int n;
char dict[105][3];

void solve()
{
    scanf("%s", s);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", dict[i]);
        if (strcmp(dict[i], s) == 0)
        {
            puts("YES");
            return;
        }
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (dict[i][1] == s[0] && dict[j][0] == s[1])
            {
                puts("YES");
                return;
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
