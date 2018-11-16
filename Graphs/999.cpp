#include "bits/stdc++.h"

using namespace std;
#define ll long long
vector<int> adj[30100];
int used[30100];

void bfs(int s) {
    queue<int> q;
    used[1] = 1;
    q.push(1);
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int to : adj[v]) {
            if(to == s) {
                cout << "YES" << endl;
                exit(0);
            }
            if(!used[to]) {
                used[to] = 1;
                q.push(to);
            }
        }
    }
}

int main() {
    int n, s;
    cin >> n >> s;
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        adj[i].push_back(i + x);
    }
    bfs(s);
    cout << "NO" << endl;
    return 0;
}
