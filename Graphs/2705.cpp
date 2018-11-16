#include <bits/stdc++.h>

#define ll          long long
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define endl        '\n'
#define hell        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;
int dis[100005],par[100005];
vii adj[100005];
void dijkstra(int source,int* d,int* p){
    memset(d,-1,sizeof dis);
    using T=pair<int,pii>;
    priority_queue<T,vector<T>,greater<T>> pq;
    pq.push({0,{source,source}});
    while(!pq.empty()){
        auto g=pq.top();
        pq.pop();
        if(d[g.y.x]!=-1) continue;
        d[g.y.x]=g.x;
        p[g.y.x]=g.y.y;
        for(auto i:adj[g.y.x]){
            if(d[i.x]==-1){
                pq.push({i.y+g.x,{i.x,g.y.x}});
            }
        }
    }
}

void solve(){
    int n,m;
    cin>>n>>m;
    rep(i,0,m){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].pb({v,w});
        adj[v].pb({u,w});
    }
    dijkstra(1,dis,par);
    if(dis[n]!=-1){
        vi path;
        int cur=n;
        while(cur!=1){
            path.pb(cur);
            cur=par[cur];
        }
        path.pb(1);
        reverse(all(path));
        for(auto i:path){
            cout<<i<<" ";
        }
    }
    else cout<<-1<<endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}