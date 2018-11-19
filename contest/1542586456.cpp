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
ll constexpr N = 1e6, M = 12*60*60;
ll h, m, s, t1, t2;
bool blk[N+9];
//=========================================================================
void init() {
    cin>>h>>m>>s>>t1>>t2;
}
void solve() {
    h %= 12; t1 %= 12; t2 %= 12;
    blk[s*12*60] = true;
    blk[(60*m+s)*12] = true;
    blk[h*60*60 + m*60 + s] = true;
    t1 *= 60*60; t2 *= 60*60;
    for (ll i = t1; ; i = (i+1)%M) {
        if (i == t2) { cout<<"YES"; return;}
        if (blk[i]) break;
    }
    for (ll i = t1; ; i = (i+M-1)%M) {
        if (i == t2) { cout<<"YES"; return;}
        if (blk[i]) break;
    }
    cout<<"NO";
}}
//=========================================================================
int main() {
    if (!dbg) { std::ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
    cout<<fixed<<setprecision(20); init(); solve(); return 0;
}
