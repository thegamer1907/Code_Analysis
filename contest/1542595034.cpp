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
ll constexpr N = 110;
ll n;
string s, d[N+9];
//=========================================================================
void init() {
    cin>>s>>n; REP1(i, n) cin>>d[i];
}
void solve() {
    bool h, t; h = t = false;
    REP1(i, n) {
        if (d[i] == s) { cout<<"YES"; return;}
        if (d[i][1] == s[0]) t = true;
        if (d[i][0] == s[1]) h = true;
    }
    if (h && t) cout<<"YES"; else cout<<"NO";
}}
//=========================================================================
int main() {
    if (!dbg) { std::ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
    cout<<fixed<<setprecision(20); init(); solve(); return 0;
}
