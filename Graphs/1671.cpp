#include<bits/stdc++.h>
using namespace std;

vector<int> g[30005];
bool vis[30005];

void bfs(int s){
    queue<int>q;
    q.push(s);
    vis[s] = true;
    while(!q.empty()){
        s = q.front();
        q.pop();
        for(auto u : g[s])
            if(!vis[u]){
                q.push(u);
                vis[u] = true;
            }
    }
}

int main(){
    int n, t;
    cin >> n >> t;
    for(int i = 1; i < n; i++){
        int x;
        cin >> x;
        g[i].push_back(i + x);
    }
    bfs(1);
    if(vis[t])puts("YES");
    else puts("NO");
    return 0;
}
