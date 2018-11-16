#include <bits/stdc++.h>
#include <sstream>
#include<ctime>
using namespace std;
#define ll long long int
#define ld long double
#define key pair<ld,ld>
#define ii pair<int,int>
#define si set<int>
#define mii map<int,int>
#define vii vector<pair<int,int> >
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int> >
#define vs vector<string>
#define all(v) v.begin(),v.end()
//#define rep(i,n) for(int i = 0; i < n; ++i)
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define nu 100001
#define mod 1000000007
#define mul(x,y) ((ll)(x)*(y))%mod
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define INF 0x3f3f3f3f
ll MOD(ll a, ll b)
{
    if(a>b)
    return a-b;
    else
    return b-a;
}
int max3(int a,int b, int c)
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
            res = (res*x)%p;
        y = y>>1; 
        x = (x*x)%p;  
    }
    return res;
}
ll logg(ll a)
{
    ll x=0;
    while(a>1)
    {
        x++;
        a/=2;
    }
    return x;

}
priority_queue<int> B;
vi adj[2006];
vi visited;
void dfs(int x, int d)
{
    visited[x]=1;
    if(adj[x].size()==0)
        B.push(d);
    for(int i=0;i<adj[x].size();i++)
    {
        if(visited[adj[x][i]]==0)
            dfs(adj[x][i],d+1);
    }
}
int main()
{
    fastio;
    int n;
    cin>>n;
    visited.resize(n+2,0);
    vi C;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a!=-1)
            adj[a].pb(i);
        else
            C.pb(i);
    }
    for(int i=0;i<C.size();i++)
    {
        dfs(C[i],1);
    }
    cout<<B.top();
} 