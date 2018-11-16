#include <iostream>
#include <vector>

using namespace std;

const int mn = 100007;
int ans = 0;
vector<bool> used(mn, false);
vector<int> cat(mn);
vector<vector<int>> edges(mn);

void dfs(int e, int now, int m){
    used[e] = true;
    if (cat[e] == 1){
        ++now;
        if (m == now){
            return;
        }
    }else{
        now = 0;
    }
    if ((edges[e].size() == 1) && (used[edges[e][0]])){
        ++ans;
    }else{
        for (size_t i = 0; i < edges[e].size(); ++i){
            if (!used[edges[e][i]])
                dfs(edges[e][i], now, m);
        }
    }
}

int main(){
    int n, m, e1, e2;
    used[0] = true;
    cin >> n >> m;
    for (int i = 0; i < n; ++i){
        cin >> cat[i];
    }
    for (int i = 0; i < n - 1; ++i){
        cin >> e1 >> e2;
        edges[e1 - 1].push_back(e2 - 1);
        edges[e2 - 1].push_back(e1 - 1);
    }
    dfs(0, 0, m + 1);
    cout << ans;
    return 0;
}
