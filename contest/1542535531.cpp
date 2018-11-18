#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int N, M, S;
vector<pii> adj[52];
map<int, int> invadj[52];
int sz[52], chk[52];

void dfs(int u, int p) {
    sz[u] = chk[u];
    for(int i = 0; i < adj[u].size(); i++) {
        int v = adj[u][i].first;
        int w = adj[u][i].second;
        if(v == p) continue;
        dfs(v, u);
        sz[u] += sz[v];
    }
}

int dp1(int u, int p, int a, int b);

int cc3[52][52][52][52];
int dp3(int u, int p, int a, int b) {
    if(p == adj[u].size()) return a == 0? 1e9 : -1e9;
    int &ret = cc3[u][p][a][b];
    if(ret != -1) return ret;

    int v = adj[u][p].first;
    int w = adj[u][p].second;

    ret = 0;
    for(int i = 0; i <= a; i++) {
        ret = max(ret, min(w + dp1(v, invadj[v][u], i, a + b - i), dp3(u, p + 1, a - i, b + i)));
    }
    return ret;
}

int cc2[52][52][52][52];
int dp2(int u, int p, int a, int b) {
    if(p == -1) return a == 0? 1e9 : -1e9;
    int &ret = cc2[u][p][a][b];
    if(ret != -1) return ret;

    int v = adj[u][p].first;
    int w = adj[u][p].second;

    ret = 0;
    for(int i = 0; i <= a; i++) {
        ret = max(ret, min(w + dp1(v, invadj[v][u], i, a + b - i), dp2(u, p - 1, a - i, b + i)));
    }
    return ret;
}

int cc1[52][52][52][52];
int dp1(int u, int p, int a, int b) {
    int &ret = cc1[u][p][a][b];
    if(ret != -1) return ret;

    if(adj[u].size() == 1 && p == 0) {
        if(a == 0) return ret = 1e9;
        int v = adj[u][p].first;
        int w = adj[u][p].second;

        return ret = b? w + dp1(v, invadj[v][u], b, 0) : 0;
    }

    ret = 0;
    for(int i = 0; i <= a; i++) {
        ret = max(ret, min(dp2(u, p - 1, i, a + b - i), dp3(u, p + 1, a - i, i + b)));
    }
    return ret;
}

int main() {
    scanf("%d", &N);

    for(int i = 0; i < N - 1; i++) {
        int u, v, w; scanf("%d %d %d", &u, &v, &w);
        u--; v--;

        adj[u].push_back(pii(v, w));
        adj[v].push_back(pii(u, w));
    }

    scanf("%d", &S);
    S--;

    scanf("%d", &M);

    for(int i = 0; i < M; i++) {
        int t; scanf("%d", &t);
        chk[--t]++;
    }

    dfs(S, -1);

    for(int u = 0; u < N; u++) {
        for(int i = 0; i < adj[u].size(); i++) {
            int v = adj[u][i].first;

            invadj[u][v] = i;
        }
    }

    memset(cc1, -1, sizeof(cc1));
    memset(cc2, -1, sizeof(cc2));
    memset(cc3, -1, sizeof(cc3));

    int ans = 1e9;
    for(int i = 0; i < adj[S].size(); i++) {
        int v = adj[S][i].first;
        int w = adj[S][i].second;

        ans = min(ans, w + dp1(v, invadj[v][S], sz[v], sz[S] - sz[v]));
    }

    printf("%d", ans);
}
