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

int get_reg(const vector<int>& walls, int t)
{
    for (int i = 1; i < 3; i++)
        if (walls[i - 1] < t && t < walls[i])
            return i;
    return 0;
}

void solve()
{
    vector<int> walls;
    int h, m, s;
    scanf("%d%d%d", &h, &m, &s);
    walls.push_back((s + 60 * m + 3600 * h) * 5 % (3600 * 60));
    walls.push_back((m * 3600 + s * 60) % (3600 * 60));
    walls.push_back(s * 3600);

    sort(walls.begin(), walls.end());

    int t1, t2;
    scanf("%d%d", &t1, &t2);
    t1 = t1 * 3600 * 5 % (3600 * 60);
    t2 = t2 * 3600 * 5 % (3600 * 60);

    puts(get_reg(walls, t1) == get_reg(walls, t2) ? "YES" : "NO");
}

int main()
{
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
#endif

    solve();

    eprintf("\n\ntime = %.3lf\n", (double)clock() / CLOCKS_PER_SEC);
}
