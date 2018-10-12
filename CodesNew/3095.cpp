// be name khoda \\

// #define stream_enable
// #define bloat_enable
#define long_enable
#define debug_enable

#ifdef bloat_enable
#include <bits/stdc++.h>
#else
#include <iostream>
#include <map>
#include <iomanip>
#include <vector>
#include <set>
#include <cmath>
#include <utility>
#include <algorithm>
#include <sstream>
#include <queue>
#include <stack>
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
typedef vector<vii> viii;
typedef vector<bool> vb;
typedef vector<vb> vbb;
typedef vector<pii> vpii;
typedef vector<pip> vpip;
typedef priority_queue<ll> maxHeap;
typedef priority_queue<ll, vi, greater<ll>> minHeap;

const ll MOD = 1000000007;

#ifdef long_enable
const ll INF = LONG_LONG_MAX;
#else
const ll INF = INT_MAX;
#endif

const vii adj4({{0, 1}, {0, -1}, {1, 0}, {-1, 0}});
const vii adj8({{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {-1, -1}, {1, -1}, {-1, 1}, {1, 1}});

#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define pb push_back

#define print(x) cout << (x) << endl
#define printv(x) fori (j12345, (x).size()) { cout << (x)[j12345] << ' '; } cout << endl
#define printvv(x) fori (i123456, (x).size()) { fori (j123456, (x)[i123456].size()) { cout << (x)[i123456][j123456] << ' '; } cout << endl; }
#define printp(x) cout << "(" << x.ff << ", " << x.ss << ")" << endl

#ifdef debug_enable
#define debug(x) cout << #x << " -> "; print(x)
#define debugv(x) cout << #x << " -> "; printv(x)
#define debugvv(x) cout << #x << " ->\n"; printvv(x)
#define debugp(x) cout << #x << " -> "; printp(x)
#else
#define debug(x)
#define debugv(x)
#define debugvv(x)
#define debugp(x)
#endif

#define fori(i, n) for(ll i = 0; i < (n); ++i)
#define forir(i, n) for(ll i = (n) - 1; i >= 0; --i)
#define forifrom(i, f, n) for(ll i = (f); i < (n); ++i)
#define forirto(i, n, f) for(ll i = (n); i >= (f); --i)

#define smin(a, b) a = min(a, (b))
#define smax(a, b) a = max(a, (b))

#define inp(x) ll x; cin >> x
#define inp2(x, y) ll x, y; cin >> x >> y
#define inp3(x, y, z) ll x, y, z; cin >> x >> y >> z
#define inp4(x, y, z, zz) ll x, y, z, zz; cin >> x >> y >> z >> zz
#define inpvi(x, size) vi x(size); fori(i123458, size) cin >> x[i123458]

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

bool isprime(ll n) {
    if (n == 2 || n == 3) return true;
    if (n < 2 || n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 6; (i - 1) * (i - 1) <= n; i += 6) {
        if (n % (i - 1) == 0 || n % (i + 1) == 0) {
            return false;
        }
    }
    return true;
}

vb sprime;
void genPrime(ll sz) {
    sprime = vb(sz, true);
    sprime[0] = false;
    sprime[1] = false;
    forifrom (i, 2, sz) {
        if (sprime[i]) {
            for (ll j = i * i; j < sz; j += i) {
                sprime[j] = false;
            }
        }
    }
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

ll bsfunction(ll n) {
    return 0;
}

vi ps;
ll v;

ll binarysearch(ll left, ll right, ll target) {
    if (left == right) {
        return left;
    }
    ll mid = (left + right > 0) ? (left + right) / 2 : (left + right - 1) / 2;
    ll val = ps[mid] - v;
    if (val > target) {
        return binarysearch(left, mid, target);
    } else {
        return binarysearch(mid + 1, right, target);
    }
}

stringstream sss;

// -----------------------------------------------------------------------

void MAIN() {
    inp2(n, k);
    inpvi(arr, n);
    ps = vi(n + 2);
    ps[n + 1] = INF;
    ps[0] = 0;
    fori (i, n) {
        ps[i + 1] = ps[i] + 1 - arr[i];
    }
    ll mx = 0;
    ll l = 0, r = 0;
    fori (i, n) {
        v = ps[i];
        ll j = binarysearch(i, n + 1, k);
        --j;
        if (j - i > mx) {
            mx = j - i;
            l = i;
            r = j;
        }
    }
    print(mx);
    forifrom (i, l, r) {
        arr[i] = 1;
    }
    printv(arr);
}

// -----------------------------------------------------------------------

#ifdef stream_enable
const ll TESTCASEN = 2;
#else
const ll TESTCASEN = 1;
#endif

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout << setprecision(10);
    sss << R"(
7 2
1 0 0 1 1 0 1
10 2
1 0 0 1 0 1 0 1 0 1
    )";
    fori (i, TESTCASEN) {
        MAIN();
    }
    return 0;
}
