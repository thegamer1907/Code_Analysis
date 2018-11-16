#include<bits/stdc++.h>
using namespace std;
vector<int> edge[2005],roots;
int n,ans=0,visited[2005],x;

void dfs(int node, int level){
  visited[node]=1;
  ans=max(ans,level);
  for(int i=0;i<edge[node].size();i++){
    if(visited[edge[node][i]])continue;
    dfs(edge[node][i],level+1);
  }
}

int main (){
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>x;
    if(x==-1){
      roots.push_back(i);
      continue;
    }
    edge[x].push_back(i);
    edge[i].push_back(x);
  }
  for(int i=0;i<roots.size();i++){
    dfs(roots[i],1);
  }
  cout<<ans<<endl;
  return 0;

}
