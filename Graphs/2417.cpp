#include <bits/stdc++.h>
using namespace std;

int n , v , ans ;
vector<int> adj[2005] ;
bool IsRoot[2005] , VIS[2005] ;
void DFS(int node,int l=1){
    VIS[node] = 1 ;
    for(int i=0;i<adj[node].size();++i)
        if( !VIS[adj[node][i]] ) DFS(adj[node][i],l+1) ;
    ans = max( ans , l ) ;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n&&scanf("%d",&v);++i){
        IsRoot[i] = v==-1 ;
        adj[v].push_back(i) ;
    }
    for(int i=1;i<=n;++i)
        if( IsRoot[i] ) DFS(i) ;
    printf("%d\n",ans);
    return 0;
}