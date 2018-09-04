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

const ll mod = (ll)1e9 + 7;
const ll inf = (ll)1e16;
const ld eps = 1e-12;
const ll N = (int)1e6 + 5;
const ll LOGN = 19;
const ld PI = 3.14159265358979323846;
inline ll mul(ll a, ll b, ll m = mod) { return (ll)(a * b) % m;}
inline ll add(ll a, ll b, ll m = mod) { a += b; if(a >= m) a -= m; if(a < 0) a += m; return a;}
inline ll power(ll a, ll b, ll m = mod) { if(b == 0) return 1; if(b == 1) return (a % m); ll x = power(a, b / 2, m); x = mul(x, x, m); if(b % 2) x = mul(x, a, m); return x;}

vector<int> spf;
vector<int> go;

void pre()
{
    spf.resize((int)1e7 + 5);
    go.resize((int)1e7 + 5, 0);
    int limit = (int)1e7 + 5;
    f(i, limit) spf[i] = i;
    rep(i, 2, limit - 1)
    {
        if(spf[i] == i)
        {
            for(int j = 2 * i; j < limit; j += i) spf[j] = i;
        }
    }
}

void prime_fact(int n)
{
    unordered_set<int> S;
    while(n > 1)
    {
        S.insert(spf[n]);
        n /= spf[n];
    }
    while(!S.empty())
    {
        go[*S.begin()]++;
        S.erase(S.begin());
    }
}

void calc()
{
    rep(i, 2, (int)1e7 + 5 - 1)
    {
        go[i] += go[i - 1];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (LOCAL) {
        freopen("C:\\Users\\Dishant\\Desktop\\Collection-DEV c++\\input.txt", "r", stdin);
        freopen("C:\\Users\\Dishant\\Desktop\\Collection-DEV c++\\output.txt", "w", stdout);
    }
    pre();
    int n;
    cin>>n;
    int a[n];
    f(i,n)
    {
        cin>>a[i];
        prime_fact(a[i]);
    }
    calc();
    int m;
    cin>>m;
    while(m--)
    {
        int l, r;
        cin>>l>>r;
        l = min(l, (int)1e7 + 2);
        r = min(r, (int)1e7 + 2);
        cout<<go[r] - go[l - 1]<<endl;
    }
    return 0;
}