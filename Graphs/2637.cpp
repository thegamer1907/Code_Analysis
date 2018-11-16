#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <map>

using namespace std;

int n, ans, v[10005], x, c[10005];
vector <int> G[10005];

void dfs (int node) {
    c[node] = 1;
    for (vector <int> :: iterator it = G[node].begin(); it != G[node].end(); ++it) {
        if (c[*it] == 0)
            dfs (*it);
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen ("inpu.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        v[i] = x;

        if (v[x] == i)
            continue;

        G[x].push_back (i);
        G[i].push_back (x);
    }

    for (int i = 1; i <= n; ++i) {
        if (c[i] == 0) {
            ++ans;
            dfs (i);
        }
    }

    cout << ans;
    return 0;
}