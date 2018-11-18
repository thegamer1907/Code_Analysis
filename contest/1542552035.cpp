#include <bits/stdc++.h>
#define FILE_IN freopen("in", "r", stdin);
#define FILE_OUT freopen("out", "w", stdout);
bool debug = 0;
#define prin(a) if(debug) cout << #a << " = " << (a) << endl
#define rang(a,b) if(debug) printf("%d -> %d\n", (a), (b))
#define separa() if(debug) cout << endl
#define fr(i,n) for(int i = 0; i<(n); i++)
#define frr(i,a,b) for(int i = (a); i<=(b);i++) 
#define mk make_pair
#define pb push_back
#define fi first
#define se second
#define ii pair<int,int>
#define ll long long
#define MOD 1000000007
const double PI = acos(-1.0);
const double eps = 1e-9;
using namespace std;
#define N 60

ll dp[N][N];
ll inf = 999999999999LL;
vector<int> adj[N];
ll dist[N][N];
int n;
int vv[N];
vector<int> leaf;
int cnt[N];

ll sol(int u, int k) {
    ll &res = dp[u][k];
    if(k == 0) return dp[u][k] = 0;
    if(res != -1LL) return res;
    ll ini,fim;
    ini = 0;
    fim = 1e9;
    while(fim > ini) {
        ll md = (fim + ini)/2;
        int sum = 0;
        for(int v : leaf) {
            if(u == v) continue;
            int a_max;
            for(a_max=k;a_max>=1;a_max--) {
                if(dist[u][v] + sol(v,k-a_max) > md) break;
            }
            sum += a_max;
        }
        if(sum >= k) {
            ini = md+1;
        } else fim = md;
    }
    return res = fim;
}

int dfs(int u, int p) {
    if(adj[u].size() == 1) leaf.pb(u);
    for(int v : adj[u]) {
        if(v == p) continue;
        dfs(v,u);
    }
}


int pai[N];
int acum[N];

int find(int x) {
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

void join(int a, int b) {
    a = find(a);
    b = find(b);
    if(a != b) {
        pai[b] = a;
        acum[a] += acum[b];
    }
}

void dfs2(int u, int p) {
    for(int v : adj[u]) {
        if(v == p) continue;
        join(u,v);
        dfs2(v,u);
    }
}

int main() {


    cin >> n;

    for(int i=0;i<=51;i++) {
        for(int j=0;j<=51;j++) {
            dp[i][j] = -1LL;
        }
    }

    for(int i=0;i<=n;i++) {
        for(int j=0;j<=n;j++) {
            dist[i][j] = inf;
            if(i == j) dist[i][j] = 0;
        }
    }

    int a,b;
    ll c;
    for(int i=0;i<n-1;i++) {
        cin >> a >> b >> c;    
        dist[a][b] = c;
        dist[b][a] = c;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    for(int k=1;k<=n;k++) {
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    int s,m;

    cin >> s;

    cin >> m;

    for(int i=0;i<m;i++) {
        cin >> a;
        vv[a]++;
    }

    for(int i=1;i<=n;i++) {
        pai[i] = i;
        acum[i] = vv[i];
    }

    dfs(s,s);
    
    for(int v : adj[s]) {
        dfs2(v,s);
    }

    ll res = inf;
    ll ini = 0;
    ll fim = 1e9;
    while(fim > ini) {
        ll md = (fim + ini)/2;
        
        for(int i=0;i<=n;i++) cnt[i] = 0;


        for(int v : leaf) {
            if(v == s) continue;
            int a_max;
            for(a_max = acum[find(v)]; a_max >= 1; a_max--) {
                if(dist[s][v] + sol(v,m-a_max) > md) break;
            }
            cnt[find(v)] += a_max;
        }
    
        bool ok = 1;
        for(int i=1;i<=n;i++) {
            if(cnt[find(i)] < acum[find(i)]) {
                ok = 0;
                break;
            }
        }

        if(ok) {
            ini = md + 1;
        } else fim = md;

    }

    cout << fim << endl;
    
    

}


