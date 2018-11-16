#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector< vector<int> > matrix;
vector<int> flag;
vector<bool> used;

int answer = 0;

void dfs(int v, int count){
    used[v] = true;
    if(count > m) return;
    bool childs = false;
    for(auto u : matrix[v]){
        if(!used[u]){
            childs = true;
            dfs(u, flag[u] == 1 ? count + 1 : 0);
        }
    }
    if(!childs){
        answer++;
    }
}

int main() {
    cin >> n >> m;
    matrix = vector< vector<int> >(n, vector<int>());
    flag = vector<int>(n, 0);
    used = vector<bool>(n, false);
    for(int i = 0; i < n; ++i){
        cin >> flag[i];
    }
    for(int i = 0; i < n - 1; ++i){
        int a, b;
        cin >> a >> b;
        a--, b--;
        matrix[a].push_back(b);
        matrix[b].push_back(a);
    }
    dfs(0, flag[0]);
    cout << answer;
    return 0;
}