#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int Max = 1e5+3;
int value[Max];
ll sum[Max], minSum[Max];
vector<pair<int, int> > adj[Max];
int res = 0;

void dfs(int node, int par) {
    for(auto &to : adj[node]) {
        if(to.first == par) continue;
        sum[to.first] = sum[node] + to.second;
        minSum[to.first] = min(sum[to.first], minSum[node]);
        dfs(to.first, node);
    }
}

void dfs1(int node, int par) {
    res++;
    for(auto &to : adj[node]) {
        if(to.first == par) continue;
        if(sum[to.first] - minSum[node] > value[to.first]) continue;
        dfs1(to.first, node);
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> value[i];
    }
    int par, weight;
    for(int i = 2; i <= n; ++i) {
        cin >> par >> weight;
        adj[par].push_back({i, weight});
        adj[i].push_back({par, weight});
    }
    sum[1] = 0;
    minSum[1] = 0;
    dfs(1, 1);
    dfs1(1, 1);
    cout << n-res << '\n';
    return 0;
}





















