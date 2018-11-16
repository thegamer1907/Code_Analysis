#include <bits/stdc++.h>
#define FILE_IN freopen("in", "r", stdin);
#define FILE_OUT freopen("out", "w", stdout);
bool debug = 1;
#define prin(a) if(debug) cout << #a << " = " << (a) << endl
#define rang(a,b) if(debug) printf("%d -> %d\n", (a), (b))
#define separa() if(debug) cout << endl
#define fr(i,n) for(int i = 0; i<(n); i++)
#define frr(i,a,b) for(int i = (a); i<=(b);i++) 
#define mk make_pair
#define pb push_back
#define fi first
#define se second
#define pii pair<int,int>
#define ll long long
#define MOD 1000000007
const double PI = acos(-1.0);
const double eps = 1e-9;
using namespace std;
#define N 100100

int cor[N];
bool vis[N];
vector<int> adj[N];

int dfs(int x, int c) {
    vis[x] = 1;
    int ret = 0;
    if(c != cor[x]) {
        c = cor[x];
        ret = 1;
    }
    for(int u : adj[x]) {
        if(vis[u] == 0) {
            ret += dfs(u,c);
        }
    }
    return ret;
}

int main () {

    int n;

    cin >> n;

        
    int a;
    for(int i=1;i<n;i++) {
        cin >> a;
        adj[a].pb(i+1);
    }

    for(int i=0;i<n;i++) {
        cin >> cor[i+1];
    }
    cout << dfs(1, -1) << endl;



	return 0;

}



