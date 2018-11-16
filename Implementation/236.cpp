#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,sse4")
#ifdef LOCAL
    #define __GLIB_CXXDEBUG
#endif // LOCAL
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/rope>

#define ll long long
#define double long double
#define ld double
#define pii pair<int, int>
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mat make_tuple

using namespace std;
using namespace __gnu_cxx;
using namespace __gnu_pbds;

const int INF = INT_MAX / 2;
const ll M = 1e9 + 7, LINF = 2e18 + 666;
const ld EPS = 1e-12;

template<class T, class CMP = less<T>>
using ordered_set = tree<T, null_type, CMP, rb_tree_tag, tree_order_statistics_node_update>;

template<class T1, class T2>
bool mini(T1 &x, T2 y)
{
    if (x > y)
    {
        x = y;
        return 1;
    }
    return 0;
}

template<class T1, class T2>
bool maxi(T1 &x, T2 y)
{
    if (x < y)
    {
        x = y;
        return 1;
    }
    return 0;
}


void run();

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start = clock();
    srand(time(0));
    cout << setprecision(15) << fixed;
    run();
    #ifdef LOCAL
        cout << "\ntime = " << (ld)(clock() - start) / CLOCKS_PER_SEC;
    #endif
    return 0;
}

#define DEBUG
#if defined DEBUG && defined LOCAL
    #define debugdo(x) x
#else
    #define debugdo(x) ;
#endif // defined

#define debug(x) debugdo(cout << x << endl);
#define debug2(x) debugdo(cout << x << " ");

// ---SOLUTION--- //

void run()
{
    int n, a, b;
    cin >> n >> a >> b;
    a--;
    b--;
    if (a > b)
        swap(a, b);
    int l = 0, r = n, d = 1;
    while (1 << d < n)
        d++;
    bool f = 1;
    while (1)
    {
        int c = (l + r) / 2;
        if (a < c && b >= c)
        {
            if (f)
                cout << "Final!";
            else
                cout << d;
            return;
        }
        else if (a < c)
            r = c;
        else
            l = c;
        d--;
        f = 0;
    }
}
