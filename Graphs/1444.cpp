#include <iostream>
#include <vector>
using namespace std;
const int N = int(2e5) + 111;

vector <int> g[N];
int used[N];
int n, t;
void dfs(int v){
used[v] = 1;
for (auto to : g[v]){
    if (!used[to])
        dfs(to);
}
}
int main(){
    cin >> n >> t;
    for (int i = 0; i < n - 1; i++){
        int a;
        cin >> a;
        g[i].push_back(i + a);
    }
    t--;
    dfs(0);
    if (used[t])
        cout << "YES";
    else cout <<"NO";
    return 0;
}
