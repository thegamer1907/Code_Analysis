#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 1e5 + 5;
const int inf = 0x3f3f3f3f;
int c[N];
set<int> G[N];
int n, m;

int main() {
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &c[i]);
        G[c[i]].insert(c[i]);
    }
    while(m--) {
        int u, v;
        scanf("%d%d", &u, &v);
        G[c[u]].insert(c[v]);
        G[c[v]].insert(c[u]);
    }
    int ans = 0;
    for(int i = 1; i <= 100000; i++) {
        if(G[ans].size() < G[i].size()) {
            ans = i;
        }
    }
    printf("%d\n", ans);
    return 0;
}
