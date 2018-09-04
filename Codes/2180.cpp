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

const int N = 2e5 + 7;

int n;
LL T[N], pre[N], suf[N];
multiset < LL > S;

int main()
{
    _upgrade
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> T[i];
        pre[i] = pre[i - 1] + T[i];
    }
    for(int i = n; i; i--)
    {
        suf[i] = suf[i + 1] + T[i];
        S.insert(suf[i]);
    }
    LL ans = 0;
    for(int i = 1; i <= n; i++)
    {
        S.erase(S.find(suf[i]));
        if(S.find(pre[i]) != S.end())
        {
            ans = max(ans, pre[i]);
        }
    }
    cout << ans << "\n";
	return 0;
}
