#include <bits/stdc++.h>

#define FOR(a, n, i) for(ll i = a; i < n; i++)
#define FORR(a, n, i) for(ll i = n - 1; i >= a; i--)
#define FORIT(a, n, it) for (auto it = a; it != n; it++)
#define FORE(e, container) for (auto e : container)
#define FORIN(n, v) vll v(n); FOR(0, n, i) cin >> v[i];
#define FORINP(n, v) vpl v(n); FOR(0, n, i) cin >> v[i].ff >> v[i].ss;
#define WTC int _; cin >> _; while(_--)
#define REP(n, i) FOR(0, n, i)

#define bb begin()
#define ee end()
#define ff first
#define ss second
#define pb push_back

#define MODF(x) (((x) % MOD) + MOD) % MOD
#define MP(a, b) make_pair(a, b)
#define ALL(container) container.bb, container.ee

using namespace std;

typedef int ll;
typedef double dd;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<vll> vvl; 
typedef vector<pll> vpl;
typedef set<ll> sll;
typedef set<pll> spl;
typedef map<ll, ll> mll;
typedef map<pll, ll> mpl;


const ll inf = numeric_limits<ll>::max(), 
         MAX = 2e5 + 5, 
         MOD = 1e9 + 7;

///////////////////////////////////////////////////////////
////////////////////    AUXILARY    ///////////////////////
///////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////
//////////////////////    MAIN    /////////////////////////
///////////////////////////////////////////////////////////
int main() {
    ll n, k; cin >> n >> k;
    bool a[n]; 
    REP(n, i) cin >> a[i];
    
    
    mll m; 
    for (ll curr = 0, i = 0; i < n; i++) {
        if (a[i] == 0) curr = 0;
        else m[i] = ++curr;
    }
    m[-10] = 0;
    if (k == 0) {
        cout << max_element(ALL(m), [](auto a, auto b){return a.ss < b.ss;})->ss << endl;
    }
    else {
        vll v;
        pll res = MP(-1, -1);
        ll cm = -1;
        REP(n, i) {  
            if (a[i] == 0) v.pb(i);
            if (v.size()) {
                ll j = v[max((ll) v.size() - k, 0)];
                if (cm <= m[j - 1] + i - j + 1) {
                    cm = m[j - 1] + i - j + 1;
                    res = MP(j, i);
                }
            }
        }
        if (res.ff != -1) {
            FOR(res.ff, res.ss + 1, i)
                a[i] = 1;
            cout << m[res.ff - 1] + res.ss - res.ff + 1 << endl;
        }
        else cout << (k != 0) * n << endl;
    }
    REP(n, i) cout << a[i] << " "; cout << endl;
}