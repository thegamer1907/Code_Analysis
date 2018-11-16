#include<bits/stdc++.h>

#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef long double ld;

const ll N=1e6+2;
const ll MOD=1e6+3;
const ll inf=1e18+6;
const ll M=2000;

template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }

ll n,m,ans;
vll Adj[N];
ll A[N],B[N];bool vis[N];

void dfs(ll v)
{
    vis[v]=1;
    if(B[v]>m) return;
    ll cnt=0;
    for(auto u: Adj[v])
    {
        if(vis[u]) continue;
        B[u]=B[v]+1;
        if(A[u]==0) B[u]=0;
        dfs(u);
        cnt++;
    }
    if(cnt==0) ans++;
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(20);
    cin>>n>>m;
    forn(i,n) cin>>A[i];
    forn(i,n-1)
    {
        ll u,v;
        cin>>u>>v;
        u--,v--;
        Adj[u].pb(v);
        Adj[v].pb(u);
    }
    B[0]=A[0];
    dfs(0);
    cout<<ans;
}

