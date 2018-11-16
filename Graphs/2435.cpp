#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > g;

int dfs(int v)
{
    int maxChildrenHeight = 0;
    for (int i = 0; i < g[v].size(); ++i)
    {
        maxChildrenHeight = max(maxChildrenHeight, dfs(g[v][i]));
    }
    return 1 + maxChildrenHeight;
}

int main(int argc, char** argv)
{
    int n;
    cin >> n;
    g.resize(n + 1);
    vector<int> topManagers;
    topManagers.reserve(2000); // now _all_ pushback will run in constant time
    int pi;
    for (int i = 1; i <= n; ++i)
    {
        cin >> pi;
        if (pi == -1)
        {
            topManagers.push_back(i);
        }
        else
        {
            g[pi].push_back(i);
        }
    }
    int ans = 0;
    for (int i = 0; i < topManagers.size(); ++i)
    {
        ans = max(ans, dfs(topManagers[i]));
    }
    cout << ans << "\n";
    return 0;
}