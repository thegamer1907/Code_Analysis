#include<bits/stdc++.h>
#include<string.h>
#define ll long long
#define pb push_back

using namespace std;

vector <ll> adj[10001];

int vis[10001];

void dfs(ll ver){
    vis[ver]=1;
    ll cur;
    for(int x=0;x!=adj[ver].size();x++){
        cur = adj[ver][x];
        if(!vis[cur])dfs(cur);
    }
}

int main(){
    ll n,i,j;
    cin >> n;
    ll p[n+1];
    map < pair<ll,ll>,ll > m;
    for(i=1;i<=n;i++){
        cin >> p[i];
        if(m.find(make_pair(i,p[i]))==m.end()){
            adj[i].pb(p[i]);
            adj[p[i]].pb(i);
        }
    }
    ll ans=0;
    for(i=1;i<=n;i++){
        if(!vis[i]){
            ans++;
            //cout << i << endl;
            dfs(i);
        }
    }
    cout << ans;
}