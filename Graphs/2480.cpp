#include <bits/stdc++.h>
#define in freopen ("input.txt", "r", stdin);
#define out freopen("output.txt", "w", stdout);
#define ll long long int

const int val = (1e4) + 25;
const int INF = (1e9) + 7;
using namespace std;

bool used[val];
int a[val], ans = 0;
vector <int> g[val];

void dfs(int v, int col){
    used[v] = true;
    if(a[v] != col) ++ ans;
    int l = g[v].size();
    for(int i=0; i<l; ++i){
        int u = g[v][i];
        if(!used[u]){
            dfs(u, a[v]);
        }
    }
}

int solve(){
    int n;
    cin >> n;
    for(int i=2; i<=n; ++i){
        int j;
        cin >> j;
        g[i].push_back(j);
        g[j].push_back(i);
    }
    for(int i=1; i<=n; ++i){
        cin >> a[i];
    }
    dfs(1, 0);
    cout << ans << endl;
}

int main(){
    //in out
	ios_base::sync_with_stdio(0);
    solve();
    return 0;
}