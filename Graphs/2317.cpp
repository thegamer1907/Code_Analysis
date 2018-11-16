#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

int n, x, ans, last, pa[2005], vis[2005], sz[2005], maxx;
vector <int> v, adj[2005];
queue <int> q;

int find_set(int nod){
    return pa[nod] == nod ? nod : find_set(pa[nod]);
}

void unite(int x, int y){
    int px = find_set(x);
    int py = find_set(y);
    pa[py] = px;
    sz[px] += sz[py];
}

int bfs(int nod){
    q.push(nod);
    vis[nod] = 1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        last = u;
        for(auto v : adj[u]){
            if(vis[v] == -1){
                vis[v] = vis[u] + 1;
                q.push(v);
            }
        }
    }
    return vis[last];
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){pa[i] = i; sz[i] = 1;}
    for(int i=1;i<=n;i++) {
        cin>>x;
        if(x != -1) {
            unite(x, i);
            adj[x].push_back(i);
        }
    }
    for(int i=1;i<=n;i++) if(pa[i] ==i && sz[i] > maxx) maxx = sz[i];
    for(int i=1;i<=n;i++) if(pa[i] == i) v.push_back(i);
    for(int i=0;i<v.size();i++){
        memset(vis, -1, sizeof vis);
        ans = max(ans, bfs(v[i]));
    }
    cout<<ans<<"\n";
	return 0;
}
