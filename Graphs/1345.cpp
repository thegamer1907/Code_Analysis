#include <bits/stdc++.h>
#define pb push_back

typedef long long ll;

using namespace std;

const int MAXN=30005;

vector <int> adj[MAXN];
bool v[MAXN];

void dfs (int V, int n){
    //cout<<V<<"\n";
    if(v[V]) return;
    v[V]=true;
    if(V==n) return;
    //if(V==n) return;
    int u=adj[V].back();
    dfs(u, n);
}

int main(){
    int n, t, a;
    cin>>n>>t;
    for(int i=0; i<n; i++) v[i]=false;
    for(int i=0; i<n-1; i++){
        cin>>a;
        adj[i].pb(a+i);
        //adj[a+i].pb(i);
    }
    dfs(0, n-1);
    if(v[t-1]) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
