#include <bits/stdc++.h>

#define fori(i, ini, lim) for(int i = int(ini); i < int(lim); i++)
#define ford(i, ini, lim) for(int i = int(ini); i >= int(lim); i--)

#define debug(x) cout << "> " << #x << " = " << x << endl;
#define debug_at(arr, at) cout << "> " << #arr << "[" << at << "] = " << arr[at] << endl;
#define debug_pair(p) cout << "> " << #p << " = (" << p.first << ", " << p.second << ")" << endl;

using namespace std;

const int N = 1e4 + 23;

vector<int> adj[N];
int color[N];
int need[N];
int parent[N];

int ans = 0;

void dfs(int u) {
    int p = parent[u];
    color[u] = color[p];
    if(color[u] != need[u]) {
        color[u] = need[u];
        ans++;
    }
    for(int v : adj[u]) {
        if(v != p) {
            dfs(v);
        }
    }
}

int main() {

    int n;
    scanf("%d", &n);

    parent[1] = 1;
    fori(i, 2, n + 1) {
        int v;
        scanf("%d", &v);
        parent[i] = v;

        adj[i].push_back(v);
        adj[v].push_back(i);
    }
    fori(i, 1, n + 1) {
        scanf("%d", &need[i]);
    }
    dfs(1);
    printf("%d\n", ans);

    return 0;
}
