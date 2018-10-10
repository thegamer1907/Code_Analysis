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

const ll MAX = 10000005;
const ll MOD = 1000000007;

vector<bool> bits(MAX);
vl primes;

void sieve() {

    for(int i = 2; i < 3200; i++)
        for(int j = i + i; j < MAX; j += i)
            bits[j] = true;

    for(int i = 2; i < 3200; i++)
        if(!bits[i]) primes.pb(i);
}

int n, x, q, l, r;
ll cum[MAX];

set<ll> st;
int cnt[MAX];

void make(ll a, ll c) {

    ll save = a;

    for(int i = 0; (i < primes.size()) && (primes[i] * primes[i] <= a); i++) {

        if(bits[a] == false) break;

        if(a % primes[i] == 0) cum[primes[i]] += c;

        while(a % primes[i] == 0) a /= primes[i];
    }

    if(a != 1)
        cum[a] += c;
}

int main() {

    sieve();

    n = in();

    for(int i = 0; i < n; i++) {
        x = in();
        st.insert(x);
        cnt[x]++;
    }

    for(auto i : st)
        make(i, cnt[i]);

    for(int i = 1; i < MAX; i++)
        cum[i] += cum[i - 1];

    q = in();

    while(q--) {

        l = min(MAX - 1, in()), r = min(MAX - 1, in());
        out(cum[r] - cum[l - 1]), nl;
    }
    return 0;
}

