#include <bits/stdc++.h>

using namespace std;

#define SZ 2000+1

int arr[SZ], n, mx;
vector<int> graph[SZ];

int dfs(int u, int depth)
{
    mx = max(depth, mx);
    for(int i= 0; i < graph[u].size(); i++)
    {
        int v = graph[u][i];
        dfs(v, depth+1);
    }
}

int main()
{
    for(int i = 0; i < SZ; i++)
        graph[i].clear();

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] != -1)
        {
            graph[arr[i]].push_back(i+1);
        }
    }

    mx = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == -1)
        {
            dfs(i+1, 1);
        }
    }
    cout << mx <<  endl;

    return 0;
}
