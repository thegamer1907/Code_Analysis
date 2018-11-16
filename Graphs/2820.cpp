#include<bits/stdc++.h>
using namespace std;
#define M 100007

int c[M];
int exist[M];
set< int >Q[M];

int main()
{
    std::ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> c[i];
        exist[c[i]] = 1;
    }

    while (m--) {
        int u, v;
        cin >> u >> v;
        if (c[u]==c[v]) continue;
        Q[c[u]].insert(c[v]);
        Q[c[v]].insert(c[u]);
    }

    int id = -1; int v = -1;

    for (int i = 1; i <= 100000; i++) {
        if (exist[i]) {
            if ((int)Q[i].size() > v) {
                v = (int)Q[i].size();
                id = i;
            }
        }
    }

    cout << id << endl;


    return 0;
}
