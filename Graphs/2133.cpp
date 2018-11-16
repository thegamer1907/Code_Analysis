#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
struct Vertex {
    bool v;
};
Vertex G[30005];
ll D[30005];
ll n,m;
void bfs(ll s){
    queue<ll> Q;
    Q.push(s);
    G[s].v=true;
    while(!Q.empty()) {
        ll u=Q.front();
        Q.pop();
        if(u==m)return;
        if(u>=1 and G[u-1].v==false){
            G[u-1].v=true;
            D[u-1]=D[u]+1;
            Q.push(u-1);
        }
        if(u<=10000 and G[u*2].v==false){
            G[u*2].v=true;
            D[u*2]=D[u]+1;
            Q.push(u*2);
        }
    }
}
int main()
{
    //ifstream cin("in.in");

    cin>>n>>m;
    bfs(n);
    cout<<D[m];
    /*for(ll i=1;i<100;i++){
        cout<<i<<" - "<<D[i]<<"\n";
    }*/
}
