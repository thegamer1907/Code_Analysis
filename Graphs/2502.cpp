#include <bits/stdc++.h>
#define MOD 1000000007
#define endl "\n"
typedef long long ll;
using namespace std;

const int N = 11111;
vector<int> tree[N];
int c[N], cc[N];
int n;

int dfs(int u, int col = 0, int p = 0) {
    int ans = 0;
    if(col) {
        cc[u] = col;
    }
    if(c[u] != cc[u]) {
        ans++;
        col = c[u];
        cc[u] = c[u];
    }
    for(v : tree[u]) {
        if(v != p) {
            ans += dfs(v, col, u);
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin >> n;
    for(int i = 2; i <= n; i++) {
        int j;
        cin >> j;
        tree[i].push_back(j);
        tree[j].push_back(i);
    }
    for(int i = 1; i <= n; i++) {
        cin >> c[i];
    }
    cout << dfs(1) << endl;
    return 0;
}
