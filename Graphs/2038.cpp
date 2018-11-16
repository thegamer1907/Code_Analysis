#include <bits/stdc++.h>
using namespace std;

int helper(int n, int m, vector<int>&cats, vector<int>adj[], vector<int>&visited, int index, int count, int max_count)
{
    visited[index] = 1;
    int next_count = (cats[index] == 1 ? count+1 : 0);
    max_count = max(max_count, next_count);
    int res = 0;
    int c = 0;
    for(int j=0; j<adj[index].size(); j++)
    {
        int next_index = adj[index][j];
        if(visited[next_index] == 1)continue;
        c++;
        res += helper(n, m, cats, adj, visited, next_index, next_count, max_count);
    }
    if(c == 0)
    {
        return (max_count <= m ? 1 : 0);
    }
    return res;
}

int solve(int n, int m, vector<int>&cats, vector<int>adj[])
{
    vector<int>visited(n, 0);
    int res = helper(n, m, cats, adj, visited, 0, 0, 0);
    return res;
}


int main() 
{
    int t;
    //cin>>t;
    t = 1;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        vector<int>cats(n, 0);
        for(int i=0; i<n; i++)cin>>cats[i];
        vector<int>adj[n];
        for(int i=0; i<n-1; i++)
        {
            int a, b;
            cin>>a>>b;
            adj[a-1].push_back(b-1);
            adj[b-1].push_back(a-1);
        }
        int res = solve(n, m, cats, adj);
        cout<<res<<endl;
    }
    return 0;
}

