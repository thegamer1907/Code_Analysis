#include <bits/stdc++.h>
using namespace std;

int helper(int n, int m, vector<int>&cats, vector<int>adj[], int index, int count, int parent)
{
    int res = 0;
    int next_count = (cats[index] == 1 ? count+1 : 0);
    if(next_count > m)return 0;
    int c = 0;
    for(int i=0; i<adj[index].size(); i++)
    {
        int next_index = adj[index][i];
        if(parent == next_index)continue;
        c++;
        res += helper(n, m, cats, adj, next_index, next_count, index);
    }
    if(c == 0)return 1;
    return res;
}

int solve(int n, int m, vector<int>&cats, vector<int>adj[])
{
    int res = helper(n, m, cats, adj, 0, 0, -1);
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

