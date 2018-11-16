#include <bits/stdc++.h>
using namespace std;

const int MaxN = 2010;
int ans = 0;

vector<int> adj [MaxN];
int mark [MaxN];

void dfs (int v, int depth)
{
    ans = max (ans, depth);
    mark[v] = true;

    for (auto& u : adj[v])
    {
        if (!mark[u])
        {
            //cerr << v << " -> " << u << endl;
            dfs (u, depth+1);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> boss;

    for (int i=1, j  ;  i<=n  ;  i++)
    {
        cin >> j;
        if (j != -1)
        {
            adj[i-1].push_back(j-1);
            adj[j-1].push_back(i-1);
        }
        else {
            boss.push_back(i-1);
        }
    }

    for (auto& v : boss)
    {
        //cerr << v << endl;
        dfs (v, 1);
    }

    cout << ans;



}
