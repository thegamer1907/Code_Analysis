#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define pb push_back
using namespace std;

vll adj[100000];
bool vis[100000];
ll t;
int flag=0;
void initialize()
{
    for(ll i=0 ; i<100000 ; i++)
        vis[i]=false;
}
void addEdje(ll a,ll b)
{
    adj[a].pb(b);
}
int dfs(ll s)
{
    vis[s]=true;
    for(ll i=0 ; i<adj[s].size() ; i++)
    {
        ll node=adj[s][i];
        if(node==t)
        {
            flag=1;
            return 0;
        }
        if(!vis[node])
        dfs(node);
    }
    return 0;
}
int main()
{
    initialize();
    ll n;
    cin>>n>>t;
    ll a[n-1];
    for(ll i=0 ; i<n-1 ; i++)
        cin>>a[i];
    for(ll i=0 ; i<n-1 ; i++)
        addEdje(i+1,i+1+a[i]);
    dfs(1);
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
