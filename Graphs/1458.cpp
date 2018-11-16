#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool dfs(int s, bool *vis, int t, vector<int> *g){
    vis[s]=true;
    if(s==t)
        return true;

    for(auto it:g[s]){
        if(!vis[it])
            return dfs(it,vis,t,g);
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n-1;i++)
        cin>>a[i];
    vector<int> g[n+1];
    for(int i=0;i<n-1;i++){
        if(a[i]+i+1<=n)
        g[i+1].push_back(a[i]+i+1);
    }
    bool vis[n+1];
    memset(vis,false,sizeof vis);
    if(dfs(1,vis,t,g))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
