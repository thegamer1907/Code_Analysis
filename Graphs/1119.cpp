#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>

void DFS(vector<vi> &G, vi &ok, int v) {
    //cout << "exploring " << v << '\n';
    ok[v] = 1;
    for (int i=0; i<G[v].size(); ++i) {
        DFS(G, ok, G[v][i]);
    }
}

int main() {
    int N, t; cin >> N >> t;
    vector<vi> G(N+1); vi ok(N+1, 0);
    for (int i=1; i<=N-1; i++) {
        int r; cin >> r;
        G[i].push_back(i+r);
    }
    DFS(G, ok, 1);
    if (ok[t]) cout << "YES" << '\n';
    else cout << "NO" << '\n';

    //for (int i=1; i<=N; i++) cout << ok[i] << ' ';
    return 0;
}
