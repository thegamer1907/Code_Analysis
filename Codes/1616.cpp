#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef long double LD;
typedef pair < int, int > PII;
typedef pair < LL, LL > PLL;
typedef pair < LD, LD > PDD;

#define _upgrade ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
template < typename _T > inline void _DBG(const char *s, _T x) { cerr << s << " = " << x << "\n"; }
template < typename _T, typename... args > void _DBG(const char *s, _T x, args... a) { while(*s != ',') cerr << *s++; cerr << " = " << x << ','; _DBG(s + 1, a...); }

#ifdef LOCAL
#define DBG(...) _DBG(#__VA_ARGS__, __VA_ARGS__)
#else
#define DBG(...) (__VA_ARGS__)
#define cerr if(0) cout
#endif

// ********************** CODE ********************** //

const int N = 1e5 + 7;

int n;
LL S, t[N], c[N];

LL check(int k)
{
    for(int i = 1; i <= n; i++)
        c[i] = t[i] + (LL)i * k;
    sort(c + 1, c + n + 1);
    LL cost = 0;
    for(int i = 1; i <= k; i++)
        cost += c[i];
    return cost;
}

int bin_search(int l, int r)
{
    while(l + 1 < r)
    {
        int m = (l + r) / 2;
        check(m) <= S ? l = m : r = m;
    }
    return l;
}

int main()
{
    _upgrade
    cin >> n >> S;
    for(int i = 1; i <= n; i++)
        cin >> t[i];
    int x = bin_search(0, n + 1);
    cout << x << " " << check(x) << "\n";
    return 0;
}
