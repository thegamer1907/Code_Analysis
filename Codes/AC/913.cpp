#include <bits/stdc++.h>
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
#define dbg(x) cout << #x << " = " << x << endl

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

int n, k;
string s;

int now;

int ans;

void solve() {
    vi pos;
    for(int i = 0; i < s.size(); i++)
        if(s[i] == 'b')
            pos.pb(i);

    if(k == 0) {
        now = 0;
        for(auto c : s) {
            if(c == 'a')
                ans = max(ans, ++now);
            else
                now = 0;
        }
        return ;
    }

    if(k >= pos.size()) {
        ans = n;
        return ;
    }

    for(int i = k - 1; i < pos.size(); i++) {
        int a = i, b = i - k + 1;

        swap(a, b);

        if(a > 0)
            a = pos[a - 1] + 1;

        if(b < pos.size() - 1)
            b = pos[b + 1] - 1;
        else
            b = n - 1;

        now = b - a + 1;

        ans = max(ans, now);
    }
}

int main() {

    n = in(), k = in();
    cin >> s;

    solve();

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'a')
            s[i] = 'b';
        else
            s[i] = 'a';
    }

    solve();

    out(ans), nl;
    return 0;
}