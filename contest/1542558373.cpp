#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pl;

#define sl(x) scanf("%d",&x)
#define pl(x) printf("%d\n",x)
#define sz(x) ((int)x.size())
#define s(x) sort(x.begin(),x.end())
#define all(v) v.begin(),v.end()
#define rs(v) { s(v) ; r(v) ; }
#define r(v) {reverse(all(v));}
#define pb push_back
#define F first
#define S second
#define f(i,n) for(int i=0;i<n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)

const ll mod = 1000000007;
const ll inf = (ll)5e16;
const ld eps = 1e-12;
const ll N = 100005;
const ll LOGN = 19;
const ld PI = 3.14159265358979323846;
ll mul(ll a, ll b, ll m = mod) { return (ll)(a * b) % m;}
ll add(ll a, ll b, ll m = mod) { a += b; if(a >= m) a -= m; if(a < 0) a += m; return a;}
ll power(ll a, ll b, ll m = mod) { if(b == 0) return 1; if(b == 1) return (a % m); ll x = power(a, b / 2, m); x = mul(x, x, m); if(b % 2) x = mul(x, a, m); return x;}
int n, k, a[N], c[N];
ll dp[22][N], curr;
int L, R;
void add(int x)
{
    curr += c[a[x]];
    c[a[x]]++;
}
void rem(int x)
{
    c[a[x]]--;
    curr -= c[a[x]];
}
void get(int l, int r)
{
    while(R <= r) add(R++);
    while(R > r + 1) rem(--R);
    while(L < l) rem(L++);
    while(L > l) add(--L);
}
void solve(int L, int R, int l, int r, int k)
{
    if(L > R) return;
    int mid = (L + R) / 2;
    dp[k][mid] = inf;
    int best;
    for(int j = l; j <= min(mid - 1, r); j++)
    {
        get(j + 1, mid);
        if(dp[k - 1][j] + curr < dp[k][mid])
        {
            dp[k][mid] = dp[k - 1][j] + curr;
            best = j;
        }
    }
    solve(L, mid - 1, l, best, k);
    solve(mid + 1, R, best, r, k);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> k;
    rep(i, 1, n) cin >> a[i];
    rep(i, 1, n)
    {
        get(1, i);
        dp[1][i] = curr;
    }
    rep(i, 2, k)
    {
        solve(1, n, 0, n, i);
    }
    cout << dp[k][n] << "\n";
    return 0;
}
