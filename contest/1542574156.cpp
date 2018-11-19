/* Author: Jason L.(int3xccATgmailDOTcom), Thu Oct  5 14:55:28 CST 2017 */
#include <bits/stdc++.h>
using namespace std;
using ll = long long; using pll = pair<ll, ll>; using dd = long double;
//=========================================================================
namespace {
static bool constexpr dbg =
#ifdef INT3XCC_DEBUG
        1;
#else
        0;
#endif
#define Dprintf(fmt, ...) do{if(dbg) printf(fmt, ##__VA_ARGS__);}while(0)
#define REP0(i, n) for (ll i = 0, _ii = n; i <  _ii; ++i)
#define REP1(i, n) for (ll i = 1, _ii = n; i <= _ii; ++i)
//=========================================================================
ll constexpr N = 20;
ll n, k;
using t = array<ll, 4>;
set<t> se;
//=========================================================================
void init() {
    cin>>n>>k;
    REP1(_, n) {
        t tmp = {0LL};
        REP0(i, k) cin>>tmp[i];
        se.insert(tmp);
    }
}
void solve() {
    vector<t> vt; for (auto const &ch: se) vt.push_back(ch);
    n = vt.size();
    for (ll i = 1; i < (1 << n); ++i) {
        t res = {0};
        ll cnt = 0;
        REP0(j, n) if (i & (1<<j)) {
            ++cnt;
            REP0(jj, k) res[jj] += vt[j][jj];
        }
        if (all_of(res.begin(), res.begin() + k,
                   [cnt](ll v) { return 2*v <= cnt;})) {
            cout<<"YES";
            return;
        }
    }

    cout<<"NO";
}}
//=========================================================================
int main() {
    if (!dbg) { std::ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
    cout<<fixed<<setprecision(20); init(); solve(); return 0;
}
