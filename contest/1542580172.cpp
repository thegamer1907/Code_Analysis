#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

const int INF = 100000;

int n;
vector<pair<int,int>> adj[100];
int s;
int m;
int xi[100];

vector<int> foglie;
int ans[100][100];

int dist[100][100];


vector<int> myf;
int dfs(int v, int p){
    if(adj[v].size() == 1) myf.push_back(v);
    int ans = xi[v];
    for(auto u:adj[v]) if(u.first!=p){
        ans += dfs(u.first, v);
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    
    cin >> n;
    for(int i=0; i<n-1; i++){
        int a, b, w;
        cin >> a >> b >> w;
        adj[a].emplace_back(b, w);
        adj[b].emplace_back(a, w);
    }
    cin >> s >> m;
    for(int i=0; i<m; i++){
        int pos; cin >> pos;
        xi[pos]++;
    }
    
    for(int i=1; i<=n; i++) if(adj[i].size() == 1) foglie.push_back(i);
    
    for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) dist[i][j] = INF;
    for(int i=1; i<=n; i++) dist[i][i] = 0;
    for(int i=1; i<=n; i++) for(auto p:adj[i]) dist[i][p.first] = p.second;
    
    for(int k=1; k<=n; k++)
        for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
    
    //~ for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) cerr << i << ' ' << j << ' ' << dist[i][j] << endl;
    
    for(int v:foglie) ans[v][0] = 0;
    for(int k=1; k<=m; k++){
        for(int v:foglie){
            //~ cerr << v << ' ' << k << endl;
            int l=0;
            int r=k*n*50;
            while(l < r){
                int x = (l+r+1)/2;
                int tot = 0;
                for(int u:foglie) if(u != v){
                    int q = 1;
                    while(q <= k && dist[v][u]+ans[u][k-q]>=x) q++;
                    tot += q-1;
                }
                if(tot >= k) l = x; else r = x-1;
            }
            ans[v][k] = l;
            //~ cerr << "ans " << v << ' ' << k << " = " << l << endl;
        }
    }
    
    int res = m*n*50;
    for(auto e:adj[s]){
        myf.clear();
        int cri = dfs(e.first, s);
        int l = 0;
        int r = m*n*50;
        while(l < r){
            int x = (l+r+1)/2;
            int tot = 0;
            for(int u:myf){
                int q = 1;
                while(q <= cri && dist[s][u]+ans[u][m-q]>=x) q++;
                tot += q-1;
            }
            if(tot >= cri) l = x; else r = x-1;
        }
        //~ cerr << e.first << ' ' << l << endl;
        res = min(res, l);
    }
    cout << res << '\n';
    return 0;
}
