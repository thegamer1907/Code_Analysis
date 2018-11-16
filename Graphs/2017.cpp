#include<bits/stdc++.h>
using namespace std;

long long int cat[200005],vis[200005],pos[200005],m;
vector<long long int> v[200005];
long long int c=0;
void dfs(long long int src)
{
    for(long long int i=0;i<v[src].size();i++)
    {
        if(vis[v[src][i]]!=1)
        {
            //cout<<"src = "<<src<<" child = "<<v[src][i]<<endl;
            //cout<<" pos[src] = "<<pos[src]<<" cat[src] = "<<cat[src]<<" cat in child = "<<cat[v[src][i]]<<endl;
            if(pos[src] == 0)
            pos[v[src][i]] = 0;

            vis[v[src][i]] = 1;

            if(cat[src]!=0 && cat[v[src][i]]!=0)
            cat[v[src][i]] += cat[src];

            if(cat[v[src][i]] > m)
            pos[v[src][i]] = 0;
            dfs(v[src][i]);
        }
    }
    if(v[src].size() == 1 && pos[src] == 1 && src!=1)
    c++;
}
int main()
{
    long long int n,i,a,b;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>cat[i];
        vis[i]=0;
        pos[i]=1;
    }
    for(i=0;i<n-1;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    pos[1]=1;
    vis[1]=1;
    //cout<<endl<<endl;
    dfs(1);
    // for(i=1;i<=n;i++)
    // {
    //     cout<<vis[i]<<" "<<cat[i]<<" "<<pos[i]<<endl;
    // }
    cout<<c<<endl;
}