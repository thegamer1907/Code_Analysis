#include <bits/stdc++.h>

using namespace std;

const int N = 205;

class Flows {
private:
    struct edge {
        int from, to, cap, flow;
        edge (int from = 0, int to = 0, int cap = 0, int flow = 0): from(from), to(to), cap(cap), flow(flow) {}

        int other (edge e, int u) {
            return e.from == u ? e.to : e.from;
        }
    } E;

    vector <edge> e;
    vector <int> g[N];
    bool inqueue[N];
    int dist[N], par[N], ptr[N], S, T;
    queue <int> q;

    bool spfa(){
        memset(dist, 0x3f, sizeof(dist));
        memset(inqueue, 0, sizeof(inqueue));
        memset(par, -1, sizeof(par));
        memset(ptr, 0, sizeof(ptr));
        inqueue[S] = true; dist[S] = 0; par[S] = 1e9 + 2277;
        q.push(S);

        while (!q.empty()) {
            int u = q.front(); q.pop(); inqueue[u] = false;
            for (auto V: g[u]) {
                edge ed = e[V];
                int v = E.other(ed, u);
                if (dist[v] > dist[u] + 1 && ed.flow < ed.cap) {
                    dist[v] = dist[u] + 1;
                    par[v] = V;
                    if (!inqueue[v]) {
                        inqueue[v] = true;
                        q.push(v);
                    }
                }
            }
        }

        return par[T] != -1;
    }

    int dinic (int u, int flow) {
        if (u == T || !flow) return flow;
        for (int &i = ptr[u]; i < g[u].size(); i++) {
            int V = g[u][i];
            edge ed = e[V];
            int v = E.other(ed, u);

            if (dist[v] == dist[u] + 1 && ed.flow < ed.cap) {
                int delta = dinic(v, min(flow, ed.cap - ed.flow));
                if (delta > 0) {
                    e[V].flow += delta;
                    e[V ^ 1].flow -= delta;
                    return delta;
                }
            }
        }

        return 0;
    }

public:
    void init (int _S, int _T) {
        S = _S;
        T = _T;
    }

    void addEdge (int u, int v, int cap, int flow) {
        g[u].push_back(e.size());
        e.push_back(edge(u, v, cap, flow));
        g[v].push_back(e.size());
        e.push_back(edge(v, u, 0, 0));
    }

    int maxFlow(){
        int ans = 0;
        while (spfa()) while (int cur = dinic(S, 1e9 + 2277)) ans += cur;
        return ans;
    }
} mf;

int n, m, a[N], b[N];

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    scanf("%d", &m);
    for (int i = 1; i <= m; i++) scanf("%d", &b[i]);
    mf.init(0, n + m + 1);
    for (int i = 1; i <= n; i++) mf.addEdge(0, i, 1, 0);
    for (int i = 1; i <= m; i++) mf.addEdge(i + n, n + m + 1, 1, 0);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (abs(a[i] - b[j]) <= 1) mf.addEdge(i, j + n, 1, 0);
        }
    }

    printf("%d", mf.maxFlow());
    return 0;
}
