#include<bits/stdc++.h>

#define hell                         1000000007
#define lcm(a,b)                     (a*b)/__gcd(a,b)
#define ll                           long long
#define vll                          vector<ll>
#define vi                           vector<int>
#define pll                          vector< pair<ll,ll> >
#define pb                           push_back
#define mp                           make_pair
#define all(v)                       v.begin(),v.end()
#define lbnd                         lower_bound
#define ubnd                         upper_bound
#define bs                           binary_search
#define F                            first
#define S                            second
#define rep(i,a,b)                   for(i=a;i<b;i++)
#define parr(a,n)                    for(i=0;i<n;i++) cout<<a[i]<<" ";cout<<endl;
#define pcont(a)                     for(auto i:a) cout<<i<<" ";cout<<endl;
#define ret(x)                       return cout<<x,0;
#define dbg(x)                       cerr << #x << " is " << x << "  ";
#define endl                           '\n'

using namespace std;
ll m,val;
vll adj[100001];
bool vis[100001];
ll a[100002];

void dfs(ll u,ll cnt)
{
    vis[u]=true;
    if(a[u]==0) cnt=0;
    else cnt++;
    if(cnt>m) return ;
    if(adj[u].size()==1 && u!=1) val++;
    for(auto it:adj[u])
    {
        if(!vis[it])
            dfs(it,cnt);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll i,j,n,k,ans=0,cnt=0,t=1;
    cin>>n>>m;
    rep(i,1,n+1) cin>>a[i];
    rep(i,0,n-1)
    {
        cin>>j>>k;
        adj[j].pb(k);
        adj[k].pb(j);
    }
    dfs(1,0);
    ret(val)
    return 0;
}
