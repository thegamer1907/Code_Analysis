#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define For(i, a, b) for(int i=a; i<b; i++)
#define ffi For(i, 0, N)
#define ffj For(j, 0, M)
#define ffa ffi ffj
#define s <<" "<<
#define w cout
#define e "\n"
#define pb push_back
#define mp make_pair
#define a first
#define b second
#define int ll
const int MAXN=50, INF=1000000000000000000;
///500,000,000
int N, dp[MAXN*2][MAXN+1][MAXN+1], S, M, cri[MAXN], out=INF, par[MAXN], con[MAXN][MAXN], edge[MAXN*2][2];
vector<int> adj[MAXN];
vector<int> tree[MAXN]; ///(node, distance)
bool visited[MAXN];

int cnt(int at) {
    int ret = cri[at];
    for (int i: tree[at]) ret += cnt(i);
    //printf("%I64d %I64d\n", at+1, ret);
    return ret;
}
int get(int at, int total, int under);
bool works(int T, int at, int total, int under) {
    bool print = false;
    //if (at == 1 && total == 2 && under == 2) print = true;

    if (print) printf("T: %I64d\n", T);

    int took = 0;
    if (print) printf("Works: %I64d %I64d %I64d\n", at, total, under);
    int node = edge[at][1];
    for (int i: adj[node]) if (edge[i][1] != edge[at][0]) {
        For (j, 1, under+1) {
            if (print) printf("Testing: %I64d %I64d %I64d: %I64d\n", i, total, j, con[node][edge[i][1]]+get(i, total, j));

            if (con[node][edge[i][1]]+get(i, total, j) <= T) {
                took += j-1; ///j-1 needed to for T to fail
                break;
            }
            if (j == under) { ///fails with all j under
                took += j;
                break;
            }
        }

    }
    if (print) printf("took: %I64d\n", took);
    print = false;
    if (took < under) return true;
    return false;
}
int get(int at, int total, int under) {
    if (dp[at][total][under] != INF) return dp[at][total][under];
    //printf("Searching %I64d %I64d %I64d\n", at, total, under);

    if (total == 0) {
        dp[at][total][under] = 0;
        //printf("1dp %I64d %I64d %I64d = %I64d\n", at, total, under, dp[at][total][under]);
        return dp[at][total][under];
    }
    if (under == 0) {
        int ind = at;
        if (ind%2 == 1) ind--;
        else ind++;
        dp[at][total][under] = con[edge[at][0]][edge[at][1]]+get(ind, total, total);
        //printf("2dp %I64d %I64d %I64d = %I64d\n", at, total, under, dp[at][total][under]);
        return dp[at][total][under];
    }

    if (adj[edge[at][1]].size() == 1) { ///You're a leaf
        if (total == under) { ///You caught all the criminals
            dp[at][total][under] = 0;
            //printf("3dp %I64d %I64d %I64d = %I64d\n", at, total, under, dp[at][total][under]);
            return dp[at][total][under];
        }
        ///Catch under criminals
        dp[at][total][under] = get(at, total-under, 0);
        //printf("4dp %I64d %I64d %I64d = %I64d\n", at, total, under, dp[at][total][under]);
        return dp[at][total][under];
    }

    int a = 0, b = INF;
    while (a != b) {
        //printf("%I64d %I64d\n", a, b);
        int mid = (a+b)/2;
        if (works(mid, at, total, under)) b = mid;
        else a = mid+1;
    }
    dp[at][total][under] = a;
    //printf("5dp %I64d %I64d %I64d = %I64d\n", at, total, under, dp[at][total][under]);
    return dp[at][total][under];
}
void make_tree(int at, int from) {
    if (visited[at]) return;
    //printf("%I64d %I64d\n", at+1, from+1);
    par[at] = from;
    visited[at] = true;
    for (int j: adj[at]) {
        int i = edge[j][1];
        //printf("looking at %I64d %I64d\n", j, i+1);
        if (!visited[i]) {
            tree[at].pb(i);
            make_tree(i, at);
        }
    }
}

main() {
    //ifstream cin("test.in");
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    ffi For (j, 0, N) con[i][j] = INF;
    For (i, 1, N) {
        int a, b, c; cin >> a >> b >> c; a--; b--;
        con[a][b] = con[b][a] = c;

        adj[a].pb(2*(i-1)), adj[b].pb(2*(i-1)+1);
        edge[2*(i-1)][0] = a, edge[2*(i-1)][1] = b;
        edge[2*(i-1)+1][0] = b, edge[2*(i-1)+1][1] = a;
    }
    cin >> S >> M;
    For (i, 0, 2*N-2) For (j, 0, M+1) For (k, 0, M+1) dp[i][j][k] = INF;
    S--;

    make_tree(S, S);
    ffj {int a; cin >> a; a--; cri[a]++;}
    for (int i: adj[S]) {
        out = min(out, con[S][edge[i][1]] + get(i, M, cnt(edge[i][1])));
    }

    //For (i, 0, 2*N-2) {For (j, 0, M+1) {For (k, 0, M+1) {if (dp[i][j][k] == INF) w<< '-' << " ";else w<<dp[i][j][k]<<" ";}w<<e;}w<<e;}

    w<< out<<e;
}
