#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll n;

vector < vector <ll> > g (2005);

ll visited[2005];
ll sp[2005];
ll root[2005];

void dfs(ll node){
    
    visited[node] = 1;

    for (ll i = 0 ; i<g[node].size();i++){
        if (visited[g[node][i]] != 2){
            sp[g[node][i]] = sp[node] + 1; 
            visited[g[node][i]] = 1;
            dfs(g[node][i]);
        }
        visited[g[node][i]] = 2;
    }
}

int main(){

        cin >>  n;
        for (ll i = 1 ; i <= n; i++){
            ll x;cin >> x;
            if (x != -1 ){
                g[x].push_back(i);
            }else {
                root[i] = 1;
            }
        }

        for (ll i = 1 ;i<= n; i++){
            if (visited[i] != 2 && root[i]) dfs(i);
        }

        ll mx = 0;
        for (ll i = 0 ; i< n;i++){
            mx = max (mx , sp[i+1]);
        }

        cout << mx+1;

        return 0;
}
