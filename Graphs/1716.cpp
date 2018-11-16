#include <bits/stdc++.h>
using namespace std;
int n,t;
bool visited[30005];
vector<int>cell[30005];
void dfs(int c)
{
    if(visited[c]){return;}
    visited[c]=1;
    if(c==t-1){cout<<"YES";return;}
    if(c==n-1){cout<<"NO";return;}
    for(int u=0;u<cell[c].size();u++)
    {
        dfs(cell[c][u]);
    }
}
int main() {
    cin>>n>>t;
    for(int i=0;i<n-1;i++)
    {
        int x;cin>>x;
        cell[i].push_back(i+x);
    }
    dfs(0);
}