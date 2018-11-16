#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool vis[100005];
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n];
    ll c[n+1];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        c[i]=0;
    }
    c[n]=0;
    for(ll i=n-1;i>=0;i--)
    {
        if(vis[a[i]]==false)
        {
            c[i]=c[i+1]+1;
            vis[a[i]]=true;
        }
        else
            c[i]=c[i+1];
    }
    for(ll i=0;i<m;i++)
    {
        ll t;
        cin>>t;
        cout<<c[t-1]<<"\n";
    }
    return 0;
}
