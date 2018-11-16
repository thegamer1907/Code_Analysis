#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pf push_front;
#define fbo find_by_order
#define ook order_of_key
#define lb lower_bound
#define ub upper_bound
#define rep(i,n) for(int i=0;i<n;i++)
#define fo(j,a,b) for(int j=a;j<=b;j++)
#define mem(x,a) memset(x,a,sizeof(x))

typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef long double ld;
typedef map<ll,ll> spt;
typedef set<ll> si;
typedef multiset<ll>::iterator sit;
typedef map<int,int>::iterator mi;
typedef vector<int>::iterator vit;
typedef vector<ii> vii;
typedef set<ii> sii;
typedef multiset<ll> msi;
typedef vector< vector<ll> > matrix;
typedef tree<ll,null_type,greater<ll>,rb_tree_tag,tree_order_statistics_node_update> ost;
typedef tree<ii,null_type,greater<ii>,rb_tree_tag,tree_order_statistics_node_update> ost1;
template<class T> T hmin(T& a, T& b) { if(a>b) return a; }
template<class T> T hmax(T& a, T& b) { if(a<b) return b; }
const ll INF = 1e18;
const int MOD= 1e9 + 7;
const int N = 2e6 + 5 ;
ll modpow(ll a,ll b) {ll res=1;a%=MOD;for(;b;b>>=1){if(b&1)res=res*a%MOD;a=a*a%MOD;}return res;}
vi adj[N];
ll vis[N],sz[N];
ll dfs(ll u)
{
    vis[u]=1;
    for(auto it:adj[u])
    {
        if(!vis[it]){
            dfs(it);
        sz[u]=max(sz[u],sz[it]);
        }
    }
    sz[u]++;
}
int main()
{
   // cout<<setprecision(20);
   // ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    ll n;
    cin>>n;
    ll p[n+2];
    rep(i,n)
    {
        cin>>p[i+1];
        if(p[i+1]!=-1)
        {
            adj[p[i+1]].pb(i+1);
        }
    }
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i] && p[i]==-1)
            dfs(i),ans=max(ans,sz[i]);
    }
    cout<<ans;
}
