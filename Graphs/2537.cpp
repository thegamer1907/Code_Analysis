// be name khoda \\

// #define stream_enable
// #define bloat_enable
// #define long_enable
// #define debug_enable

#ifdef bloat_enable
#include <bits/stdc++.h>
#else
#include <iostream>
#include <vector>
#include <cmath>
#include <utility>
#include <algorithm>
#include <sstream>
#include <queue>
#include <limits.h>
#endif

using namespace std;

#ifdef stream_enable
#define cin sss
#endif

#ifdef long_enable
typedef long long int ll;
#else
typedef int ll;
#endif

typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef pair<ll, pii> pip;
typedef vector<vi> vii;
typedef vector<bool> vb;
typedef vector<pii> vpii;
typedef vector<pip> vpip;

const ll MOD = 1e9 + 7;

#ifdef long_enable
const ll INF = LONG_MAX;
#else
const ll INF = INT_MAX;
#endif

#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define pb push_back

#ifdef debug_enable
#define debug(x) cout << #x << " -> " << x << endl
#define debugvi(x) cout << #x << " -> ["; fori(i, (x).size() - 1) {cout << (x)[i] << ", ";} if ((x).size() > 0) {cout << x.back();} cout << ']' << endl
#else
#define debug(x)
#define debugvi(x)
#endif

#define print(x) cout << (x) << endl

#define fori(i, n) for(ll i = 0; i < (n); ++i)
#define forir(i, n) for(ll i = (n) - 1; i >= 0; --i)
#define forifrom(i, f, n) for(ll i = (f); i < (n); ++i)
#define forirto(i, f, n) for(ll i = (n); i >= (f); --i)

#define smin(a, b) a = min(a, (b))
#define smax(a, b) a = max(a, (b))

#define inp(x) ll x; cin >> x
#define inp2(x, y) ll x, y; cin >> x >> y
#define inp3(x, y, z) ll x, y, z; cin >> x >> y >> z
#define inpvi(x, size) vi x(size); fori(i, size) cin >> x[i]

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

ll powMod(ll a, ll b, ll mod) {
    ll n = 1;
    ll p = a;
    while (b > 0) {
        if (b % 2 == 1) {
            n *= p;
            n %= mod;
        }
        p *= p;
        p %= mod;
        b /= 2;
    }
    return n;
}

ll modularInverse(ll a, ll mod) {
    return powMod(a, mod - 2, mod);
}

stringstream sss;

vii graph;
vi col;

ll res = 0;

void solve(ll step, ll parent, ll color) {
    debug(step);
    debug(parent);
    debug(color);
    res += (color != col[step]);
    fori (i, graph[step].size()) {
        ll p = graph[step][i];
        if (p == parent) {
            continue;
        }
        solve(p, step, col[step]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    sss << R"(
6
1 2 2 1 5
2 1 1 1 1 1
    )";

// -----------------------------------------------------------------------

    inp(n);
    graph = vii(n);


    forifrom (i, 1, n) {
        inp(m);
        graph[i].pb(m - 1);
        graph[m - 1].pb(i);
    }

    fori (i, n) {
        debugvi(graph[i]);
    }
    col = vi(n);
    fori (i, n) {
        inp(m);
        col[i] = m;
    }

    solve(0, 0, 0);
    print(res);

// -----------------------------------------------------------------------
    return 0;
}
