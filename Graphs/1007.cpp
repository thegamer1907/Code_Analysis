#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> graph[],bool visited[],int pos){
    visited[pos] = 1;
    int size = graph[pos].size();
    for(int i=0;i<size;i++){
        if(!visited[graph[pos][i]]) {
            visited[graph[pos][i]]=1;
            dfs(graph,visited,graph[pos][i]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>n>>t;
    vector<int> graph[n];
    for(int i=0;i<n-1;i++){
        int temp;
        cin>>temp;
        graph[i].push_back(i+temp);
    }

    bool visited[n] = {0};
    dfs(graph,visited,0);

    if(visited[t-1]) cout<<"YES";
    else cout<<"NO";

}
