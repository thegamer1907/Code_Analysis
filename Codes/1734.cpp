#include <bits/stdc++.h>
#include <bits/stdtr1c++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;

#define read freopen("in.c", "r", stdin)
#define write freopen("out.c", "w", stdout)
#define all(a) (a).begin(), (a).end()
#define mp make_pair
#define ff first
#define ss second
#define left(x) ((x) << 1)
#define right(x) (((x) << 1) + 1)
#define pb push_back
#define pp pop_back
#define eps 1e-15
#define inf (1000000000)
#define infl (1000000000000000000ll)
#define cs(p) printf("Case %d:", (p)++)
#define nl puts("")
#define sp printf(" ")
#define out(a) printf("%lld", (ll)(a))
#define SET(a) memset((a), -1, sizeof(a))
#define CLR(a) memset((a), 0, sizeof(a))
#define dbg(x) printf("#xxx = %lld\n", (ll)(x))
#define dbs(x) printf("#str = %s\n", (x))

ll bgm(ll a, ll b, ll m) {
    a %= m;
    ll rem = 1;
    while(b) {
        if(b&1)
            rem = (rem * a) % m;
        a = (a * a)%m;
        b >>= 1;
    }
    return rem;
}

ll inv(ll a, ll mod) {
    return bgm(a, mod - 2, mod);
}

ll in() {
    ll a;
    assert(scanf("%lld", &a) != EOF);
    return a;
}

double dl() {
    double a;
    assert(scanf("%lf", &a) != EOF);
    return a;
}

const int MAX = 100005;
const ll MOD = 1000000007;

ll n, m, k;
ll lo, hi, mid;
ll ans;

ll f(ll x) {

    ll res = 0;

    for(int i = 1; i <= n; i++)
        res += min(x/i, m);

    return res;
}

int main() {

    n = in(), m = in(), k = in();

    lo = 1, hi = n * m;

    while(lo <= hi) {

        mid = (lo + hi) / 2;

        if(f(mid) < k)
            lo = mid + 1;
        else
            ans = mid, hi = mid - 1;
    }

    out(ans), nl;
    return 0;
}

