#include<bits/stdc++.h>
using namespace std;

int flag=0;
vector<int> v[100005];
int vis[100005];
void dfs(int src,int k)
{
    //cout<<"src = "<<src<<endl;
    if(src == k)
    {
        flag=1;
        return ;
    }
    vis[src]=1;
    for(int i=0;i<v[src].size();i++)
    {
        if(vis[v[src][i]] != 1)
        {
            dfs(v[src][i], k);
        }
    }
    return ;
}
int main()
{
    int n,k,i,x;
    cin>>n>>k;
    for(i=1;i<=n-1;i++)
    {
       cin>>x;
       vis[i]=0;
       v[i].push_back(i+x);
    }
    dfs(1,k);
    if(flag == 0)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}