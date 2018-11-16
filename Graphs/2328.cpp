#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

ll vis[2005] = {0};
vector <ll> v[2005];
ll ans;
void dfs(ll node,ll d)
{
    vis[node] = 1;
    for(ll i=0;i<v[node].size();i++)
    {
        if(vis[v[node][i]] == 0)
        {
            ans = max(ans,d+1);
            dfs(v[node][i],d+1);
        }
    }
}

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    vector <ll> root;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i] == -1)
        {
            root.pb(i);            
        }
        else
        {
            v[a[i]-1].pb(i);
            v[i].pb(a[i]-1);
        }
    }
    ll res=1;
    for(ll i=0;i<root.size();i++)
    {
        ans=1;
        dfs(root[i],1);
        res = max(res,ans);
    }
    cout<<res;
}