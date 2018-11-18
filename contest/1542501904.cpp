#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ldbl;
typedef pair<int, int> pii;
typedef pair<unsigned, unsigned> puu;
typedef pair<ll, ll> pll;
typedef pair<ull, ull> pull;
typedef vector<int> vi;
typedef vector<unsigned> vu;
typedef vector<ll> vll;
typedef vector<ull> vull;
typedef vector<pii> vpii;
typedef vector<puu> vpuu;
typedef vector<pll> vpll;
typedef vector<pull> vpull;
typedef vector<string> vstr;
typedef vector<double> vdbl;
typedef vector<ldbl> vldbl;
#define pb push_back
#define ppb pop_back
#define pfr push_front
#define ppfr pop_front
#define emp emplace
#define empb emplace_back
#define be begin
#define rbe rbegin
#define all(x) (x).be(), (x).end()
#define rall(x) (x).rbe(), (x).rend()
#define fst first
#define fir first
#define sec second
#define mkp make_pair
#define brif(cond) if (cond) break
#define ctif(cond) if (cond) continue
#define retif(cond) if (cond) return
static inline void canhazfast() {ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}
template<typename T> T gcd(T a, T b) {return b == 0 ? a : gcd(b, a%b);}
template<typename T> T extgcd(T a, T b, T &x, T &y)
{
    T x0 = 1, y0 = 0, x1 = 0, y1 = 1;
    while (b) {
        T q = a/b; a %= b; swap(a, b);
        x0 -= q*x1; swap(x0, x1);
        y0 -= q*y1; swap(y0, y1);
    }
    x = x0; y = y0; return a;
}
static inline int ctz(unsigned x) {return __builtin_ctz(x);}
static inline int ctzll(ull x) {return __builtin_ctzll(x);}
static inline int clz(unsigned x) {return __builtin_clz(x);}
static inline int clzll(ull x) {return __builtin_clzll(x);}
static inline int popcnt(unsigned x) {return __builtin_popcount(x);}
static inline int popcntll(ull x) {return __builtin_popcountll(x);}
static inline int bsr(unsigned x) {return 31^clz(x);}
static inline int bsrll(ull x) {return 63^clzll(x);}

#define MX 100000

ll dp[20][MX];
int a[MX], f[MX];
int lcur, rcur;
ll ccur;

void reset() { while (lcur <= rcur) --f[a[lcur++]]; ccur = 0; }

void shift(int ld, int rd)
{
    /// <-  ->
    while (lcur > ld) ccur += f[a[--lcur]]++;
    while (rcur < rd) ccur += f[a[++rcur]]++;
    /// ->  <-
    while (lcur < ld) ccur -= --f[a[lcur++]];
    while (rcur > rd) ccur -= --f[a[rcur--]];
}

void solve(int i, int b, int e, int l, int r)
{
    retif(b > e);
    int m = (b+e)/2, p = -1;
    ll res = 1e18;
    shift(min(r, m)+1, m);
    for (int j = min(r, m); j >= l; --j) {
        ccur += f[a[--lcur]]++;
        ll tmp = dp[i-1][j-1]+ccur;
        if (res > tmp) res = tmp, p = j;
        else if (res == tmp) p = j;
    }
    dp[i][m] = res;
    solve(i, b, m-1, l, p);
    solve(i, m+1, e, p, r);
}

int main()
{
    canhazfast();

    int n, k;
    ll c = 0;

    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        c += f[--a[i]]++;
        dp[0][i] = c;
    }
    //fill_n(f, n, 0);
    lcur = 0;
    rcur = n-1;
    for (int i = 1; i < k; ++i) {
        reset();
        solve(i, i, n-1, i, n-1);
    }
    cout << dp[k-1][n-1];

    return 0;
}
