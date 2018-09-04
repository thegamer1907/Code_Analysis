#include<bits/stdc++.h>
using namespace std;
/*#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
/*template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll,ll> pl;
typedef pair<int,int> pii;

#define LOCAL 0
#define dbg(x) cout << #x << " is " << x << "\n"
#define gll(x) scanf("%d",&x)
#define gll2(x,y) scanf("%d%d",&x,&y)
#define gll3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define gllarr(arr,n) f(i,n) gll(arr[i]);
#define sz(x) ((int)x.size())
#define s(x) sort(x.begin(),x.end())
#define all(v) v.begin(),v.end()
#define rs(v) { s(v) ; r(v) ; }
#define r(v) {reverse(all(v));}
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=n-1;i>=0;i--)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define repr(i,a,b) for(int i=a;i>=b;i--)

const ll mod = 1000000007;
const ll inf = (ll)1e17;
const ld eps = 1e-12;
const ll N = (int)1e5+5;
const ll LOGN = 19;
const ld PI = 3.14159265358979323846;
ll mul(ll a, ll b, ll m = mod) { return (ll)(a * b) % m;}
ll add(ll a, ll b, ll m = mod) { a += b; if(a >= m) a -= m; if(a < 0) a += m; return a;}
ll power(ll a, ll b, ll m = mod) { if(b == 0) return 1; if(b == 1) return (a % m); ll x = power(a, b / 2, m); x = mul(x, x, m); if(b % 2) x = mul(x, a, m); return x;}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (LOCAL) {
        freopen("C:\\Users\\Dishant\\Desktop\\Collection-DEV c++\\input.txt", "r", stdin);
        freopen("C:\\Users\\Dishant\\Desktop\\Collection-DEV c++\\output.txt", "w", stdout);
    }
    int n;
    cin>>n;
    if(n < 3)
    {
        cout<<"0\n";
        return 0;
    }
    int a[n];
    f(i,n) cin>>a[i];
    vector<ll> pre(n,0);
    pre[0] = a[0];
    rep(i,1,n-1)
        pre[i] = pre[i-1] + a[i];
    ll req = pre[n - 1];
    if(req % 3)
    {
        cout<<"0";
        return 0;
    }
    req /= 3;
    ll req2 = 2 * req;
    vector<int> idx[2];
    f(i,n)
    {
        if(pre[i] == req)
            idx[0].pb(i);
        if(pre[i] == req2)
            idx[1].pb(i);
    }
    ll ans = 0;
    if(idx[0].empty() || idx[1].empty())
    {
        cout<<"0";
        return 0;
    }
    int dp[n + 2] = {0};
    rep(i,1,n-1)
    {
        if(pre[i - 1] == req)
            dp[i] = dp[i - 1] + 1;
        else
            dp[i] = dp[i - 1];
    }
    rep(i,1,n-2)
    {
        if(pre[i] == req2)
        {
            ans += dp[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}