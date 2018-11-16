#include<bits/stdc++.h>

#define hell                         1000000007
#define lcm(a,b)                     (a*b)/__gcd(a,b)
#define ll                           long long
#define vll                          vector<ll>
#define vi                           vector< ll >
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
#define endl                           '\n'

using namespace std;
vll adj[100005];
ll color[100005],fcolor[100005];
bool vis[100005];
ll val;
void dfs(ll u,ll p)
{
    vis[u]=true;
    color[u]=color[p];
    if(color[u]!=fcolor[u])
    {
        val++;
        color[u]=fcolor[u];
    }
    for(auto v:adj[u])
    {
        if(vis[v]==false)
            dfs(v,u);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll i,j,n,t=1,k=0,cnt=0,mini=LLONG_MAX,maxi=LLONG_MIN,ans=0;
    ll m;
    cin>>n;
    rep(i,0,n-1)
    {
        cin>>j;
        adj[i+2].pb(j);
        adj[j].pb(i+2);
    }
    memset(color,0,sizeof(color));
    rep(i,1,n+1)
        cin>>fcolor[i];
    dfs(1,1);
    ret(val);

    return 0;

}
