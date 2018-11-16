#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>
using namespace std;
bool visit[30050];
bool f;
int t;
vector<int> g[30050];
void dfs(int i)
{
    visit[i] = true;
    int j;
    if (t == i)
    {
        f = true;
        return;
    }
    for (j = 0; j < g[i].size(); j++)
    {
        if (!visit[g[i][j]])
            dfs(g[i][j]);
    }
}
int main()
{
    int i, n, x;

    cin >> n >> t;
    for (i = 1; i <= n - 1; i++)
    {
        cin >> x;
        g[i].push_back(x + i);
    }
    f = false;
    dfs(1);
    if (f) cout << "YES" << endl;
    else
        cout << "NO" << endl;
}