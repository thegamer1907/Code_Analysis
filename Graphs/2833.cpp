#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;
typedef long long int lli;
lli n,m;
vector<lli> vis,col;
vector<vector<lli> >g;
map<lli,set<lli> > m1;
void dfsVisit(lli node){
  vis[node]=1;
  lli i;
  for(i=0;i<g[node].size();i++){
    if(col[g[node][i]]!=col[node]){
      m1[col[node]].insert(col[g[node][i]]);
    }
    if(vis[g[node][i]]==0){
      dfsVisit(g[node][i]);
    }
  }
}
void dfs(){
  lli i;
  for(i=1;i<=n;i++){
    //if(vis[i]==0){
      dfsVisit(i);
    //}
  }
}
int main(){
  ios::sync_with_stdio(false);
  cin >> n >> m;
  vis.resize(n+1);
  col.resize(n+1);
  g.resize(n+1);
  lli i;
  for(i=0;i<n;i++){
    cin >> col[i+1];
    vis[i] = 0;
    m1[col[i+1]].insert(-1);
  }
  for(i=0;i<m;i++){
    lli x,y;
    cin >> x >> y;
    g[x].push_back(y);
    g[y].push_back(x);
  }
  dfs();
  map<lli,set<lli> >::iterator itr = m1.begin();
  lli ans = itr->first;
  lli temp = (itr->second).size();
  for(;itr!=m1.end();itr++){
    if((itr->second).size()==temp and ans>itr->first){
      ans = itr->first;
    }
    else if((itr->second).size()>temp){
      temp = (itr->second).size();
      ans = itr->first;
    }
  }
  cout << ans << endl;
  return 0;
}
