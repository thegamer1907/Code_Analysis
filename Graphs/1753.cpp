#include <bits/stdc++.h>

using namespace std;
const int MAX_N = 1e5+5;

void dfs(int v, vector<int> g[], vector<bool> &visited){
    visited[v] = true;
    for(int u: g[v]){
        if(!visited[u]){
            dfs(u, g, visited);
        }
    }
}
int main(){
    int n, s;
    scanf("%d%d", &n, &s);
    vector<int> g[MAX_N + 4];
    vector<bool> visited(MAX_N, false);
    for(int i = 1; i < n; i++){
        int x;
        scanf("%d", &x);
        g[i].push_back(x + i);
    }
    dfs(1, g, visited);
    printf("%s\n", visited[s] ? "YES" : "NO");
    return 0;
}
