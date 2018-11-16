#include <bits/stdc++.h>

using namespace std;

vector<int> adj[50000];
bool calculated[50000] = {0};


queue<int> q;
int d[50000];
bool visited[50000] = {0};

void bfs(int n) {
    d[n] = 0;
    visited[n] = true;
    q.push(n);

    while(!q.empty()) {
        int s = q.front(); q.pop();
        for(auto u: adj[s]) {
            if(visited[u]) continue;
            visited[u] = true;
            d[u] = d[s]+1;
            q.push(u);
        }
    }
}



void createGraph(int n, int m) {
    if(calculated[n]) return;
    calculated[n] = true;
    if(2*n <= 2*m) {
        adj[n].push_back(2*n);
        createGraph(2*n, m);
    }
    if(n-1 > 0) {
        adj[n].push_back(n-1);
        createGraph(n-1, m);
    }
}


int main() {
    int n, m;
    cin >> n >> m;

    createGraph(n, m);

    bfs(n);
    cout << d[m];

    return 0;
}
