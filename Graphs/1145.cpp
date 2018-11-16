#include <cstdio>
#include <queue>
#include <vector>
using namespace std;
int n,t,a; vector<int> adj[30001]; bool vis[30001]; queue<int> q;
int main() {
    scanf("%d%d",&n,&t);
    for (int i = 1;i < n;i++) scanf("%d",&a),adj[i].push_back(i+a);
    q.push(1); vis[1] = 1;
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        if (cur == t) break;
        for (int nxt : adj[cur]) if (!vis[nxt]) q.push(nxt),vis[nxt] = 1;
    }
    if (vis[t]) printf("YES\n");
    else printf("NO\n");
    return 0;
}
