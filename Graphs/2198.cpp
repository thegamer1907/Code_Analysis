#include <iostream>
#include<bits/stdc++.h>

using namespace std;

const int N = 2003;
int ans;
vector<int> adj[N];
bool vis[N];


void dfs(int p, int width)
{
    vis[p] = 1;
    ans = max(ans,width);
    for(int ch : adj[p])
    {
        dfs(ch,width+1);
    }
    ans = max(ans,width);
}

int main()
{

    int n;
    cin >> n;
    for(int i=1;i<=n;++i)
    {
        int x;
        cin >> x;
        if(x!=-1)
            adj[x].push_back(i);
    }

    for(int i=1;i<=n;++i)
    {
        dfs(i,1);
    }
    cout << ans;
    return 0;
}
