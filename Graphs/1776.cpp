#include <bits/stdc++.h>
using namespace std;

typedef pair< long long int, long long int > pii;

const long long int MAX = 30000;
const long long int INF = 0x3f3f3f3f3f3f3f3f;

vector< pii > G[MAX];
long long int d[MAX];

void dijkstra(long long int start) {
    long long int u, v, i, c, w;

    priority_queue< pii, vector< pii >, greater< pii > > Q;

    memset(d, 0x3f, sizeof d);
    Q.push(pii(0, start));
    d[start] = 0;


    while(!Q.empty()) {
        u = Q.top().second; // node
        c = Q.top().first; // node cost
        Q.pop(); // remove the top item.

        if(d[u] < c) continue;


        for(i = 0; i < G[u].size(); i++) {
            v = G[u][i].first; // node
            w = G[u][i].second; // edge weight

            if(d[v] > d[u] + w) {
                d[v] = d[u] + w;
                Q.push(pii(d[v], v));
            }
        }
    }
}

int main() {
    long long int x,n,t,e,i,u,v,w,start;cin>>n>>t;
    for(i = 1; i <= n; i++) G[i].clear();
    for(long long int i=1;i<=n-1;i++){
        cin>>x;
        G[i].push_back(pii(x+i, 1));
    }
    start=1;
    dijkstra(start);

    if(d[t]>=INF){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}