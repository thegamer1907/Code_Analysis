#include<iostream>
#include<vector>
#include<cstring>
#include<cstdio>
#define pb push_back
using namespace std;
vector <int> edges[30001];
int visited[30001];
void dfs(int x){
    if(visited[x])return;
    visited[x] = true;
    for(int i=0;i<edges[x].size();i++)dfs(edges[x][i]);
}
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=1;i<n;i++){
        int temp;
        scanf("%d",&temp);
        edges[i].pb(temp+i);
    }
    memset(visited,false,sizeof(visited));
    dfs(1);
    if(visited[k])printf("YES\n");
    else printf("NO\n");
    return 0;
}
