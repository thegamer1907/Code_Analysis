#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<climits>
#include<cstring>
#include<iomanip>
#include<string>
#include<bitset>
#include<unordered_map>
#include<unordered_set>
#include<set>
#include<vector>
#include<map>
#include<queue>
#include<stack>
#include<deque>
#include<algorithm>
#include<functional>
#include<chrono>
//#include<windows.h>
//#include<direct.h>
#include<random>
#include<sstream>

#define y0 asdahsdlkahsdad
#define y1 aasdfasdfasdf
#define yn askfhwqriuperikldjk
#define j1 assdgsdgasghsf
#define taskname "F"
//#define BeztDonkey

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

using namespace std;

template <typename T> inline void Cin(T &x)
{
    register char c;
    for (c = getchar(); c < '0' || c > '9'; c = getchar());
    for (x = 0; c >= '0' && c <= '9'; c = getchar())
        x = x * 10 + c - '0';
}

const int maxN = 1e5 + 1;
const ll LInf = 1e12;

static int a[maxN], cnt[maxN], n, k, L, R;
static ll _f[maxN], _g[maxN], *f = _f, *g = _g, cost;

inline bool Minimize(ll &a, ll b) { return a >= b ? a = b, 1 : 0; }

#define Push(x) { cost += cnt[x]++; }
#define Pop(x) { cost -= --cnt[x]; }
inline ll Cost(int l, int r)
{
    if (l >= r) return 0;
    while (R < r) Push(a[++R]);
    while (L > l) Push(a[--L]);
    while (R > r) Pop(a[R--]);
    while (L < l) Pop(a[L++]);
    return cost;
}

inline void Solve(int l, int r, int optL, int optR)
{
    if (l > r) return;
    int m = l + r >> 1, optM = 1;
    g[m] = LInf;
    ll val = 0;
    for (int i = min(m - 1, optR); i >= optL; --i)
        if (Minimize(g[m], f[i] + Cost(i + 1, m))) optM = i;
    Solve(l, m - 1, optL, optM);
    Solve(m + 1, r, optM, optR);
}

int main()
{
    #ifdef BeztDonkey
    auto start = chrono::steady_clock::now();
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen(taskname".inp", "r", stdin);
    //freopen(taskname".out", "w", stdout);

    Cin(n); Cin(k);
    L = 2; R = 1; cost = 0;
    for (int j = 1; j <= n; ++j) Cin(a[j]), f[j] = Cost(1, j);
    while (--k > 0) Solve(1, n, 1, n), swap(f, g);
    cout << f[n];

    #ifdef BeztDonkey
    auto end = chrono::steady_clock::now();
    cerr << "In milliseconds : "
         << chrono::duration_cast<chrono::milliseconds>(end - start).count();
    cerr << '\n' << "In seconds : "
         << chrono::duration_cast<chrono::seconds>(end - start).count() << '\n';
    #endif
    return 0;

}
