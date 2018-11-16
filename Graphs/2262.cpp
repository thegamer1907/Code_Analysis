#include <bits/stdc++.h>
using namespace std;

const int maxn = 2005;
int n;
vector<int> edge[maxn];
set<int> root;
int res = 0;
void dfs(int pos, int dep) {
    res = max(res, dep);
    for (int i = 0; i < edge[pos].size(); ++i) {
        dfs(edge[pos][i], dep + 1);
    }
}

int main(int argc,char *argv[])
{
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) root.insert(i);
    for (int i = 1, x; i <= n; ++i) {
        scanf("%d", &x);
        if (x == -1) continue;
        edge[x].push_back(i);
        root.erase(i);
    }
    for (auto i : root) {
        dfs(i, 1);
    }
    printf("%d\n", res);
    return 0;
}