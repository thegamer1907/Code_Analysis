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
#ifndef LOCAL
const int N = 100500;
const int BSZ = 200;
#else
const int N = 1005;
const int BSZ = 2;
#endif
const int BCNT = N / BSZ + 1;
const ll INF = (ll)1e18;

struct Controller
{
    ll ans;
    int* ptr1;
    int* ptr2;

    Controller(): ans(), ptr1(), ptr2() {}
    Controller(ll _ans, int* _ptr1, int* _ptr2):
        ans(_ans), ptr1(_ptr1), ptr2(_ptr2) {}

    void add(int x)
    {
        ans += ptr1[x] - (ptr2 == nullptr ? 0 : ptr2[x]);
        ptr1[x]++;
    }

    void remove(int x)
    {
        ptr1[x]--;
    }
};

int n, k;
int seq[N];
int block_cnt[BCNT][N];
int buf_cnt[N];
ll block_ans[BCNT][BCNT];
int sl, sr, bl, br;
ll dp[N], dp_new[N];

Controller get_cont(int _sl, int _sr)
{
    sl = _sl;
    sr = _sr;
    bl = sl / BSZ + 1;
    br = sr / BSZ - 1;

    Controller cont;
    if (bl > br)
        cont = {0, buf_cnt, nullptr};
    else
        cont = {block_ans[bl][br], block_cnt[br], bl > 0 ? block_cnt[bl - 1] : nullptr};

    if (sl <= sr)
    {
        for (int i = sl; i < min(sr + 1, bl * BSZ); i++)
            cont.add(seq[i]);
        if (sl / BSZ != sr / BSZ)
        {
            for (int i = (br + 1) * BSZ; i <= sr; i++)
                cont.add(seq[i]);
        }
    }
    return cont;
}

void free_cont(Controller& cont)
{
    if (sl <= sr)
    {
        for (int i = sl; i < min(sr + 1, bl * BSZ); i++)
            cont.remove(seq[i]);
        if (sl / BSZ != sr / BSZ)
        {
            for (int i = (br + 1) * BSZ; i <= sr; i++)
                cont.remove(seq[i]);
        }
    }
}

void dac(int l, int r, int a, int b)
{
    if (l > r)
        return;

    int m = (l + r) / 2;
    int lim = min(b, m - 1);
    auto cont = get_cont(lim + 1, m - 1);
    ll best_val = INF;
    int best_pos = -1;

    for (int i = lim; i >= a; i--)
    {
        cont.add(seq[i]);
        ll val = dp[i] + cont.ans;
        if (best_val > val)
        {
            best_val = val;
            best_pos = i;
        }
    }

    for (int i = lim; i >= a; i--)
        cont.remove(seq[i]);
    free_cont(cont);

    dp_new[m] = best_val;
    dac(l, m - 1, a, best_pos);
    dac(m + 1, r, best_pos, b);
}

/*
int cost(int l, int r)
{
    int cnt[N] = {};
    int s = 0;
    for (int i = l; i <= r; i++)
    {
        s += cnt[seq[i]];
        cnt[seq[i]]++;
    }
    return s;
}
*/

void solve()
{
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &seq[i]);
        seq[i]--;
    }

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && i % BSZ == 0)
            memcpy(block_cnt[i / BSZ], block_cnt[i / BSZ - 1], sizeof(int) * N);
        block_cnt[i / BSZ][seq[i]]++;
    }

    for (int i = 0; i < n; i += BSZ)
    {
        Controller cont(0, buf_cnt, nullptr);
        for (int j = i; j < n; j++)
        {
            cont.add(seq[j]);
            if (j % BSZ == BSZ - 1)
                block_ans[i / BSZ][j / BSZ] = cont.ans;
        }
        memset(buf_cnt, 0, sizeof(int) * N);
    }

    fill(dp, dp + n + 1, INF);
    dp[0] = 0;

    for (int i = 0; i < k; i++)
    {
        fill(dp_new, dp_new + n + 1, INF);
        dac(1, n, 0, n - 1);
        dp_new[0] = 0;
        copy(dp_new, dp_new + n + 1, dp);
    }

    printf("%lld\n", dp[n]);
}

int main()
{
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
#endif

    solve();

    eprintf("\n\ntime = %.3lf\n", (double)clock() / CLOCKS_PER_SEC);
}
