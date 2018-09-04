/* Author: Jason L.(int3xccATgmailDOTcom), Sun Apr 16 10:22:47 CST 2017 */
#include <bits/stdc++.h>
using namespace std;
using ll = long long; using pll = pair<ll, ll>;
//=========================================================================
static bool constexpr dbg =
#ifdef INT3XCC_DEBUG
        1;
#else
        0;
#endif
#define Dprintf(fmt, ...)  do { if (dbg) printf(fmt, ##__VA_ARGS__); } while(0)
#define REP0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define REP1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
//=========================================================================
ll constexpr NM = -1;
ll n, res;
int main()
{
    if (!dbg) { std::ios::sync_with_stdio(false); cin.tie(nullptr);}

    string str; cin>>str;
    ll b, s, c; b = s = c = 0;
    for (char ch: str) {
        if (ch == 'B') ++b; else if (ch == 'C') ++c; else ++s;
    }
    ll hb, hs, hc, pb, ps, pc, r; cin>>hb>>hs>>hc>>pb>>ps>>pc>>r;
    res = LONG_LONG_MAX;
    if (b) res = min(res, hb/b);
    if (c) res = min(res, hc/c);
    if (s) res = min(res, hs/s);
    hb -= res*b; hs -= res*s; hc -= res*c;
    while ((b && hb) || (c && hc) || (s && hs)) {
        if (b) {
            if (hb >= b) hb -= b;
            else { r -= (b-hb)*pb; hb = 0;}
        }
        if (c) {
            if (hc >= c) hc -= c;
            else { r -= (c-hc)*pc; hc = 0;}
        }
        if (s) {
            if (hs >= s) hs -= s;
            else { r -= (s-hs)*ps; hs = 0;}
        }
        if (r>= 0) ++res; else break;
    }
    res += r/(pb*b+ps*s+pc*c);
    cout<<res<<'\n';

    return 0;
}
