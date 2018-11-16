#include <iostream>
#include <vector>

using namespace std;

void dfs(int e, int now, int m, int &ans, vector<int> &cat, vector<bool> &used, vector<vector<int>> &edges){
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
        //cout << "!!";
    }else{
        for (size_t i = 0; i < edges[e].size(); ++i){
            if (!used[edges[e][i]])
                dfs(edges[e][i], now, m, ans, cat, used, edges);
        }
    }
}

int main(){
    int n, m, e1, e2, ans = 0;
    vector<bool> used(n, false);
    vector<int> cat(n);
    used[0] = true;
    vector<vector<int>> edges(n);
    cin >> n >> m;
    for (int i = 0; i < n; ++i){
        cin >> cat[i];
    }
    for (int i = 0; i < n - 1; ++i){
        cin >> e1 >> e2;
        edges[e1 - 1].push_back(e2 - 1);
        edges[e2 - 1].push_back(e1 - 1);
    }
    dfs(0, 0, m + 1, ans, cat, used, edges);
    cout << ans;
    return 0;
}
