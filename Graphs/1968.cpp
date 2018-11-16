#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define disp(x) cout << (x) << endl;
#define pb push_back
#define ff first
#define ss second

using namespace std;

vector<vector<int> >adj;
vector<bool> vis;
vector<bool> a;
int m;
int cnt=0;

void dfs(int s,int c){
    vis[s] = 1;
    if(a[s])c++;
    else c = 0;
    if(c>m)return ;

    bool lf = 1;
    for(int i = 0;i<adj[s].size();i++){
        if(!vis[adj[s][i]]){
            lf = 0;
            dfs(adj[s][i],c);
        }
    }
    if(lf)cnt++;

}
















/*
vector<int>level;

unordered_map<int,int>vis;
unordered_map<int,int>level;

void bfs(int s){
    queue<int>q;
    q.push(s);
    level[s]=0;
    vis[s]=1;
    while(!q.empty()){
        int p = q.front();q.pop();
        if(p==m)break;
        if(!vis.count(2*p)>0 && 2*p<=2*m+1){
            vis[2*p]=1;
            q.push(2*p);
            level[2*p]=level[p]+1;
        }
        if(p>1 && !vis.count(p-1)>0){
            vis[p-1]=1;
            q.push(p-1);
            level[p-1]=level[p]+1;
        }
    }
}

*/



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n >> m;

    adj.resize(n+1);
    vis.resize(n+1,0);
    a.resize(n+1,0);

    for(int i = 1;i<=n;i++){
        int b;
        cin >> b;
        a[i]=b;
    }

    for(int i = 1;i<=n-1;i++){
        int x,y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    dfs(1,0);
    cout << cnt << endl;

}
