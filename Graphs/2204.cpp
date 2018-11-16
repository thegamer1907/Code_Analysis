#include <iostream>
#include <vector>

using namespace std;

int dfs(int now, vector<int> &used, vector<int> &boss){
    if (boss[now] == -2){
        used[now] = 1;
    }else if (used[boss[now]] != 0){
        used[now] = used[boss[now]] + 1;
    }else{
        used[now] = dfs(boss[now], used, boss) + 1;
    }
    return used[now];
}

int main(){
    int n, ans = 0;
    cin >> n;
    vector<int> boss(n), used(n, 0);
    for (int i = 0; i < n; ++i){
        cin >> boss[i];
        --boss[i];
    }
    for (int i = 0; i < n; ++i){
        if (used[i] == 0){
            ans = max(ans, dfs(i, used, boss));
        }
    }
    cout << ans;
    return 0;
}
