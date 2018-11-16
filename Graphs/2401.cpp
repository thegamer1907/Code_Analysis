#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2010;

int pai[MAXN], nivel[MAXN];
vector<int> grafo[MAXN];
bool vis[MAXN];

void DFS(int u)
{
    vis[u] = true;
    for (int i = 0; i < grafo[u].size(); i++)
    {
        int v = grafo[u][i];
        if (!vis[v])
        {
            nivel[v] = nivel[u]+1;
            DFS(v);
        }
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x != -1)
        {
            pai[i] = x;
            grafo[x].push_back(i);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (pai[i] != -1)
        {
            memset(vis, 0, sizeof vis);
            DFS(i);
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans = max(ans, nivel[i]+1);
    printf("%d\n", ans);
}
