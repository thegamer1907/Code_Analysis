#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10010;

vector<int> grafo[MAXN];
int cor[MAXN], ans = 1;
bool mark[MAXN];

void DFS(int u)
{
    mark[u] = 1;
    for (int i = 0; i < grafo[u].size(); i++)
    {
        int v = grafo[u][i];
        if (mark[v]) continue;

        if (cor[v] != cor[u]) ans++;
        DFS(v);
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        grafo[i].push_back(x);
        grafo[x].push_back(i);
    }
    for (int i = 1; i <= n; i++)
        cin >> cor[i];

    DFS(1);
    cout << ans << "\n";
}
