#include <bits/stdc++.h>

using namespace std;

vector<int> adj[2123];
int p[2123];

int ans;
void dfs(int v, int h) {
    ans = max(ans, h);

    for(int ad : adj[v]) {
        if(ad != p[v]) {
            dfs(ad, h+1);
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int pi;
        cin >> pi;
        if(pi != -1) {
            // adj[i].push_back(pi);
            adj[pi].push_back(i);
        }
        p[i] = pi;
    }

    ans = 1;

    for(int i = 1; i <= n; i++) {
        if(p[i] == -1) {
            dfs(i, 1);
        }
    }

    cout << ans << endl;
}