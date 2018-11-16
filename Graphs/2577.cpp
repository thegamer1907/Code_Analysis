#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e4 + 10;
int n;
int c[maxn];
vector<int> tree[maxn];
int ans = 1;

void DFS(int v)
{
    for(int i = 0, n = tree[v].size(); i < n; i++){
        int u = tree[v][i];
        if(c[v] != c[u]) ans++;
        DFS(u);
    }
}

int main()
{
    scanf("%d", &n);
    for(int i = 2, x; i <= n; i++){
        scanf("%d", &x);
        tree[x].push_back(i);
    }
    for(int i = 1; i <= n; i++) scanf("%d", &c[i]);

    DFS(1);

    printf("%d\n", ans);

    return 0;
}
