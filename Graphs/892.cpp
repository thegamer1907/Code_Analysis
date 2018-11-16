#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define disp(x) cout << (x) << endl;
using namespace std;


vector<vector<int> >adj;
vector<bool> vis;

void dfs(int s){
    vis[s] = 1;
    for(int i=0;i<adj[s].size();i++){
        if(vis[adj[s][i]]!=1)dfs(adj[s][i]);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin >> n >>t;
    vis.resize(n+1,0);
    adj.resize(n+1);
    for(int i=1;i<n;i++){
      int a;
      cin >> a;
      adj[i].push_back(a+i);
    }
    dfs(1);
    if(vis[t]==1)cout << "YES\n";
    else cout << "NO\n";







}
