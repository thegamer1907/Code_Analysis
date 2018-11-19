//#pragma comment(linker, "/stack:200000000")
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma GCC optimize("unroll-loops")

#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

#define uint unsigned int
#define ll long long
#define ull unsigned long long
#define ld long double
#define rep(i, l, r) for (int i = l; i < r; i++)
#define repb(i, r, l) for (int i = r; i > l; i--)
#define sz(a) (int)a.size()
#define fi first
#define se second
#define mp(a, b) make_pair(a, b)

using namespace std;

inline void setmin(int &x, int y) { if (y < x) x = y; }
inline void setmax(int &x, int y) { if (y > x) x = y; }
inline void setmin(ll &x, ll y) { if (y < x) x = y; }
inline void setmax(ll &x, ll y) { if (y > x) x = y; }

const int N = 100000;
const int inf = (int)1e9 + 1;
const ll big = (ll)1e18 + 1;
const int P = 239;
const int MOD = (int)1e9 + 7;
const int MOD1 = (int)1e9 + 9;
const double eps = 1e-9;
const double pi = atan2(0, -1);
const int ABC = 26;

int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    cout << fixed;
    //ll TL = 0.95 * CLOCKS_PER_SEC;
    //clock_t time = clock();
    int n, k;
    cin >> n >> k;
    int cnt[1 << (1 << k)];
    fill(cnt, cnt + (1 << (1 << k)), 0);
    rep(i, 0, n)
    {
        int mask = 0;
        rep(j, 0, k)
        {
            int x;
            cin >> x;
            mask = (mask << 1) + x;
        }
        cnt[mask]++;
    }
    rep(mask, 1, (1 << (1 << k)))
    {
        int c[k]; fill(c, c + k, 0);
        bool ok = true;
        rep(i, 0, (1 << k))
            if ((mask >> i) & 1)
            {
                if (cnt[i] > 0)
                {
                    rep(j, 0, k)
                        if (!((i >> j) & 1))
                            c[j]++;
                }
                else
                {
                    ok = false;
                    break;
                }
            }
        if (!ok)
            continue;
        rep(i, 0, k)
            if (c[i] * 2 < __builtin_popcount(mask))
            {
                ok = false;
                break;
            }
        if (ok)
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}