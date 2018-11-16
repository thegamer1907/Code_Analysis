#include <bits/stdc++.h>
#define ll long long
using namespace std;
    
    ll n, k;
    bool vis[2000000], ans=false;
    vector<ll> adj[200000];

void dfs(ll u, ll x) {
    if(u == x) {
        ans = 1;
        return;
    }
    vis[u] = 1;
    for(ll i = 0; i < adj[u].size(); i++) {
        ll v = adj[u][i];
        if( !vis[v] ){      
            dfs(v, x);
        }
    }
    return;
}

int main() {
    cin >> n >> k;
    ll x;
    for (ll i=1;i<n;i++){
        cin>>x;
        adj[i].push_back(i+x);
    }
    dfs(1, k);
    if( ans ) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
