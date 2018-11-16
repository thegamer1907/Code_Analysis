#include <bits/stdc++.h>
using namespace std;
const int N=1000000;
bool visit[N];
vector < int > g[N];
int p=0;
bool ca[N];

int k,n;

int ans=0;

void dfs(int v, int par, int cat){
    //cout << v << " " << par << " " << cat << endl;
    if (cat >k){
        return ;
    }
    int p1=0;
    for (int i=0;i<g[v].size();i++){
        int u=g[v][i];
        if (u!=par){
            p1=1;
            if (ca[u]==1){
                dfs(u ,v , cat+1);
            }
            else
                dfs(u, v, 0);
        }
    }
    if (p1==0){
        ans++;
    }
}

int main(){
    cin >> n >> k;
    for (int i=0;i<n;i++){
        cin >> ca[i];
    }
    for (int i=0;i<n-1;i++){
        int v,u;
        cin >> v >> u;
        v--;
        u--;
        g[v].push_back(u);
        g[u].push_back(v);
    }
    dfs(0, 0, ca[0]);
    cout << ans;


}
