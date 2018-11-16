#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 100000
#define mp make_pair
#define pb push_back
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define fork(n) for(int k = 0; k < n; k++)
#define forsk(s, n) for(int k = s; k < n; k++)
#define DEBUG(x) cout << #x << " = " << x << endl
#define fst first
#define snd second

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

vvi adj;

int DFS(int daVez, int *vis){
    vis[daVez] = 1;
    int res = 0;
    for(int u : adj[daVez]){
        if(!vis[u]){
            int ret = DFS(u, vis);
            if(res < 1 + ret){
                res = 1 + ret;
            }
        }
    }
    return res;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    adj.assign(n + 1, vi());
    vi raizes;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == -1){
            raizes.pb(i);
        } else {
            x--;
            adj[x].pb(i);
        }
    }

    int res = 1;
    int vis[n + 1];
    memset(vis, 0, sizeof vis);
    for(int v : raizes){
        int ret = DFS(v, vis);
        if(res < 1 + ret){
            res = 1 + ret;
        }
    }
    cout << res << endl;

    return 0;
}
