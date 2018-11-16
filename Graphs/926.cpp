#include<bits/stdc++.h>

using namespace std;

int visit[30004];
vector <int> adj[30004];

void bfs()
{
    int u, v, i;
    queue <int> q;
    visit[1] = 1;
    q.push(1);
    while (!q.empty()) {
        u = q.front();
        q.pop();
        for (i = 0; i < adj[u].size(); i++) {
            v = adj[u][i];
            if (visit[v] == 0) {
                visit[v] = 1;
                q.push(v);
            }
        }
    }
}

int main()
{
    int n, t, i, v;
    cin >> n >> t;
    for (i = 1; i < n; i++) {
        cin >> v;
        v += i;
        adj[i].push_back(v);
    }
    bfs();
    if (visit[t] == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
