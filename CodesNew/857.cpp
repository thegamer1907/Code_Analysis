#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll b[111111];
ll n,d,m,a[111111],sum,cnt;
ll vis[11111];
vector<vector<ll>>v(11111);
map<string,int>mp;
void dfs(int s)
{
    vis[s]=1;
    for(int i=0;i<v[s].size();i++)
    {
        if(vis[v[s][i]]==0)
            dfs(v[s][i]);
    }
}

int main()
{
    string s[111111],r;
    char s2;
    double d;
    ll j,x,y,z,i,c1=0,c2=0,x1=0,x2=0,x3=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>r;
        mp[r]=1;
    }
    for(i=0;i<m;i++)
    {
        cin>>r;
        if(mp[r]==1)
            cnt++;
    }
    n-=cnt/2;
    m-=(cnt+1)/2;
    if(n>m)
        cout<<"YES";
    else
        cout<<"NO";
}
