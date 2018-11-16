#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
bool *visited;
int *depths;
int *parents;
vector<int> *G;
 
void DFS(int u, int depth);
 
int main() {
    int n;
    cin>>n;
 
    visited = new bool[n+1];
    depths = new int[n+1];
    parents = new int[n+1];
    G = new vector<int>[n+1];
    
    fill_n(visited, n+1, false);

    for (int i = 1; i <= n; ++i) {
        int pi;
        cin>>pi;
        parents[i] = pi;
        if (pi != -1) {
            G[pi].push_back(i);
        }
    }
    int depth = 1;
    for (int j = 1; j <= n; ++j) {
        if (parents[j] == -1 && !visited[j]) {
            DFS(j, depth);
        }
    }
    int max = 1;
    for (int k = 1; k <= n; ++k) {
        if (depths[k] > max) {
            max = depths[k];
        }
    }
    cout<<max<<endl;
}
 
 
void DFS(int u, int depth) {
    visited[u] = true;
    depths[u] = depth;
 
    for (int v: G[u]) {
        if (!visited[v]) {
            DFS(v, depth+1);
        }
    }
}