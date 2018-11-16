#include<bits/stdc++.h>

#define pb push_back

using namespace std;

int n, t, ans = 0;
vector<vector<int> > G;
vector<int> r;

void dfs(int a, int p, int deep){
    ans = max(ans, deep);
    for(int i = 0; i < G[a].size(); i++){
        int to = G[a][i];
        if(to != p) dfs(to, a, deep+1);
    }

}


int main(){
    //ifstream cin("input.txt");
    cin>>n;
    G.resize(n+1);
    r.resize(n+1);
    for(int i = 1; i <= n; i++){
     cin>>t;
     r[i] = t;
     if(t != -1){
        G[t].pb(i);
        G[i].pb(t);
     }
    }


 for(int i = 1; i <= n; i++)
    if(r[i] == -1) dfs(i, i, 1);
 cout<<ans;
}
