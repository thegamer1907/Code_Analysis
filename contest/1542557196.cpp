#include<bits/stdc++.h>
using namespace std;

int N, M, S;
vector<vector<int> > adj;
vector<int> U, V, W;
vector<int> X, sz, par;

void dfs(int u, int fe) {
    sz[u] = X[u];
    for(int i = 0; i < adj[u].size(); i++) {
        int e = adj[u][i];
        int v = U[e] + V[e] - u;
        if(e == fe) continue;
        dfs(v, e);
        sz[u] += sz[v];
        par[v] = e;
    }
}

int dp1(int u, int fe, int s, int z);

int cc3[52][52][52][52];
int dp3(int u, int idx, int s, int z) {
    if(idx == -1) return s == 0? 1e9 : 0;
    int &ret = cc3[u][idx][s][z];
    if(ret != -1) return ret;

    int e = adj[u][idx];

    ret = 0;
    for(int i = 0; i <= s; i++) {
        int v = U[e] + V[e] - u;
        ret = max(ret, min(W[e] + dp1(v, e, i, z + s - i), dp3(u, idx - 1, s - i, z + i)));
    }
    return ret;
}

int cc2[52][52][52][52];
int dp2(int u, int idx, int s, int z) {
    if(idx == adj[u].size()) return s == 0? 1e9 : 0;
    int &ret = cc2[u][idx][s][z];
    if(ret != -1) return ret;

    int e = adj[u][idx];

    ret = 0;
    for(int i = 0; i <= s; i++) {
        int v = U[e] + V[e] - u;
        ret = max(ret, min(W[e] + dp1(v, e, i, z + s - i), dp2(u, idx + 1, s - i, z + i)));
    }
    return ret;
}

int cc1[52][52][52][52];
int dp1(int u, int fe, int s, int z) {
    int &ret = cc1[u][fe][s][z];
    if(ret != -1) return ret;

    if(adj[u].size() == 1) {
        if(s == 0) return ret = 1e9;
        if(z == 0) return ret = 0;
        int p = U[fe] + V[fe] - u;
        return ret = W[fe] + dp1(p, fe, z, 0);
    }

    int idx;
    for(int i = 0; i < adj[u].size(); i++) {
        int e = adj[u][i];
        if(e == fe) {
            idx = i;
            break;
        }
    }

    ret = 0;
    for(int i = 0; i <= s; i++) {
        ret = max(ret, min(dp3(u, idx - 1, i, z + s - i), dp2(u, idx + 1, s - i, z + i)));
    }
    return ret;
}

int main() {
    scanf("%d", &N);

    adj.resize(N);
    U.resize(N - 1);
    V.resize(N - 1);
    W.resize(N - 1);

    for(int i = 0; i < N - 1; i++) {
        int u, v, w; scanf("%d %d %d", &u, &v, &w);
        u--; v--;
        adj[u].push_back(i);
        adj[v].push_back(i);
        U[i] = u;
        V[i] = v;
        W[i] = w;
    }

    scanf("%d", &S);
    S--;

    scanf("%d", &M);

    X = vector<int>(N, 0);
    for(int i = 0; i < M; i++) {
        int t; scanf("%d", &t);
        X[--t]++;
    }

    sz.resize(N);
    par.resize(N);
    dfs(S, -1);

    memset(cc1, -1, sizeof(cc1));
    memset(cc2, -1, sizeof(cc2));
    memset(cc3, -1, sizeof(cc3));

    int ans = 1e9;
    for(int i = 0; i < adj[S].size(); i++) {
        int e = adj[S][i];
        int v = U[e] + V[e] - S;
        ans = min(ans, W[e] + dp1(v, e, sz[v], M - sz[v]));
    }

    printf("%d", ans);
}
