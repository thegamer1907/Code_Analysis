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
#define left(x) ((x) + (x) + 1)
#define right(x) ((x) + (x) + 2)
#define pb push_back
#define pp pop_back
#define eps 1e-15
#define mx 100005
#define mmod 1000000007
#define inf (INT_MAX - 5)
#define cs(p) printf("Case %d:", (p)++)
#define nl puts("")
#define sp printf(" ")
#define out(a) printf("%lld", (ll)a)
#define SET(a) memset((a), -1, sizeof(a))
#define CLR(a) memset((a), 0, sizeof(a))
#define fns return 0

ll bgm(ll a, ll b, ll m)
{
    a %= m;
    ll rem = 1;
    while(b)
    {
        if(b&1)
            rem = (rem * a) % m;
        a = (a * a)%m;
        b >>= 1;
    }
    return rem;
}

ll in()
{
    ll a;
    scanf("%lld", &a);
    return a;
}

double dl()
{
    double a;
    scanf("%lf", &a);
    return a;
}

ll solve(ll n, ll k)
{
    ll tot = (1LL << n) - 1, now = tot/2 + 1;
    if(now == k)
        return n;
    if(now > k)
        return solve(n - 1, k);
    return solve(n - 1, k - now);
}

int main()
{
    ll n = in(), k = in();
    out(solve(n, k)), nl;
    fns;
}

