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

int main()
{
    _upgrade
    int n, b; cin >> n >> b;
    vector < int > v(n), can;
    int even = 0, odd = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (odd == even && i > 0)
        {
            can.push_back(abs(v[i - 1] - v[i]));
        }
        if(v[i] & 1) odd++;
        else even++;
    }
    sort(all(can));
    int ans = 0;
    for(auto u: can)
    {
        if(u <= b)
        {
            ans++;
            b -= u;
        }
    }
    cout << ans << "\n";
	return 0;
}
