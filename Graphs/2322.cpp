#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > v(2005);
vector<int> topoSort;
vector<int> visited(2005 , 0);

void tSort(int node)
{
    visited[node] = 1;
    for(auto i : v[node])
        if(!visited[i])
            tSort(i);

    topoSort.push_back(node);
}

int main()
{
    ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);

    int n;
    cin >> n;

    for(int i =1 ; i <= n ; i++)
    {
        int x;
        cin >> x;
        if(x != -1)
            v[x].push_back(i);
    }

    for(int i = 1 ; i <= n ; i++)
        if(!visited[i])
            tSort(i);

    int dp[n+1][n+1];
    for(int i = 0 ; i <= n ; i++)
        for(int j = 0 ; j <= n ; j++)
            dp[i][j] = 0;

    for(auto i : topoSort)
        for(auto j : v[i])
        {
            dp[i][j] = dp[j][i] = 1;
            for(int k = 1 ; k <= n ; k++)
                if(dp[j][k])
                    dp[i][k] = dp[k][i] = 1;
        }


    vector<vector<int> > ans;
    for(int i = 1 ; i <= n ; i++)
    {
        bool ok = 0;
        for(auto& j : ans)
        {
            bool notThere = 1;
            for(auto& k : j)
            {
                if(dp[i][k])
                {
                    notThere = 0;
                    break;
                }
            }

            if(notThere)
            {
                j.push_back(i);
                ok =1;
                break;
            }
        }

        if(!ok)
            ans.push_back({i});
    }

    cout << ans.size();

    return 0;
}
