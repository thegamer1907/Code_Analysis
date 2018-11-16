//bluishgreen
#include <bits/stdc++.h>
#include <sstream>
#include<ctime>
using namespace std;
#define REP(i,a,b) for(i=a;i<b;i++)
#define getarr(a,n) for(i=0;i<n;i++){cin>>a[i];}
#define disparr(a,n) for(i=0;i<n;i++){cout<<a[i];}cout<<"\n";
#define disparrs(a,n) for(i=0;i<n;i++){cout<<a[i]<<" ";}cout<<"\n";
#define disparrl(a,n) for(i=0;i<n;i++){cout<<a[i]<<"\n";}cout<<"\n";
#define mem0(a) memset(a,0,sizeof(a));
#define ll long long int
#define ld long double
#define key pair<ld,ld>
#define pll pair<ll,ll>
#define pii pair<int,int>
#define si set<int>
#define vii vector<pair<int,int> >
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vs vector<string>
#define all(v) v.begin(),v.end()
#define pb push_back
#define pob pop_back
#define pof pop_front
#define mp make_pair
#define F first
#define S second
#define nu 100001
#define M 1000000007
#define mul(x,y) ((ll)(x)*(y))%M
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define INF 0x3f3f3f3f
int MOD(int a, int b)
{
    if(a>b)
    return a-b;
    else
    return b-a;
}
ll max3(ll a,ll b,ll c)
{
    return max(c,max(a,b));
}
ll power(ll x,ll y, ll p)
{
    ll res = 1;      
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1; 
        x = (x*x) % p;  
    }
    return res;
}
ll max(ll a,ll b)
{
    return (a>b)?a:b;
}
ll min(ll a,ll b)
{
    return (a<b)?a:b;
}
ll gcd(ll a,ll b)
{
    if(b==1)
    return 1;
    else if(a%b==0)
    return b;
    else
    return gcd(b,a%b);
}
vi adj[10005];
bool vis[10005];
int col[10005];
int ans = 1;
void dfs(int s)
{
    vis[s]=true;
    vi::iterator i;
    REP(i,adj[s].begin(),adj[s].end())
    {
        if(!vis[*i])
        {
        if(col[*i]!=col[s])
        ans++;
        dfs(*i);
        }
    }
}
int main()
{
    fastio;
    mem0(vis)
    int n;
    cin>>n;
    int i,j,k;
    REP(i,2,n+1)
    {
        cin>>j;
        adj[i].pb(j);
        adj[j].pb(i);
    }
    REP(i,1,n+1)
    {
        cin>>col[i];
    }
    dfs(1);
    cout<<ans<<'\n';
}