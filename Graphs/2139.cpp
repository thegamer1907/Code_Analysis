#include <bits/stdc++.h>
using namespace std;


const int MAXN=1e5;
vector<int> visited;
vector<int> distancia;

vector<int> vecinos(int u){
    vector<int> res;
    if(u>1) res.push_back(u-1);
    if(u>=MAXN) return res;
    res.push_back(u*2);
    return res;
}

int bfs(int u, int v){

    visited[u]=1;
    int sum=0;
    queue<int> cola;
    cola.push(u);
    while(!cola.empty()){
        int f = cola.front();
        //cout<<f<<"\n";
        cola.pop();
        if(f==v) return distancia[f];
        for(auto k : vecinos(f)){
            if(visited[k]==1) continue;
            visited[k]=1;
            distancia[k]=1+distancia[f];
            cola.push(k);
        }
    }
}

int main(void){
    int n, m;
    cin>>n>>m;
    visited=vector<int> (1000000, -1);
    distancia=vector<int> (10000000, 0);
    cout<<bfs(n, m)<<"\n";

    return 0;
}
