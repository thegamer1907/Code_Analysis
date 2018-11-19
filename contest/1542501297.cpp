#include<bits/stdc++.h>
#define For(i, a, b)  for(int i = a; i <= b; ++i)
#define Ford(i, a, b) for(int i = a; i >= b; --i)
#define FileName      "test"
#define ll            long long
#define ld            long double
#define ull           unsigned long long
#define pb            push_back
#define X             first
#define Y             second
//#define Karma

using namespace std;

template <typename T> inline void Cin(T &x)
{
    char c;
    T sign = 1;
    x = 0;
    for (c = getchar(); c < '0' || c > '9'; c = getchar())
        if (c == '-')
            sign = -1;
    for (; c >= '0' && c <= '9'; c = getchar())
        x = x * 10 + c - '0';
    x *= sign;
}

typedef pair<int, int> pii;
typedef pair<ll, int> plli;
const int N = 1e5 + 7;
const ll inf = 1e15 + 7;

int cnt[N], a[N], n, k, l, r;
ll cost = 0, f[25][N];

bool Min(ll& a, ll b)
{
    if(a > b)
    {
        a = b;
        return 1;
    }
    return 0;
}

void Deleted(int x)
{
    --cnt[x];
    cost -= cnt[x];
}

void Add(int x)
{
    cost += cnt[x];
    ++cnt[x];
}

ll CCost(int L, int R)
{
    if(L >= R) return 0;
    while(l < L) Deleted(a[l]), ++l;
    while(l > L) --l, Add(a[l]);
    while(r > R) Deleted(a[r]), --r;
    while(r < R) ++r, Add(a[r]);
    return cost;
}

void Dp(int g, int L, int R, int optL, int optR)
{
    if(L > R) return;
    int mid = (L + R) / 2, optM = -1;
    f[g][mid] = inf;
    int lim = min(optR, mid);
    For(i, optL, lim)
    if(Min(f[g][mid], f[g - 1][i - 1] + CCost(i, mid))) optM = i;
    Dp(g, L, mid - 1, optL, optM);
    Dp(g, mid + 1, R, optM, optR);
}

void Solve()
{
    cin >> n >> k;
    l = 1, r = n;
    For(i, 1, n)
    {
        cin >> a[i];
        cost += cnt[a[i]];
        f[1][i] = cost;
        ++cnt[a[i]];
    }
    For(i, 2, k) Dp(i, 1, n, 1, n);
    cout << f[k][n];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifdef Karma
    freopen(FileName".inp", "r", stdin);
    freopen(FileName".out", "w", stdout);
#endif // Karma

    Solve();

    return 0;
}
