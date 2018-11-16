#include <iostream>
#include <vector>

template<typename element_type>
std::vector<element_type> read_vector(int size);

using namespace std;

int dfs(int node,const vector<int>& label,const vector<vector<pair<int,int>>>& children,long long path);

int main(){
  int nodes;
  while(cin>>nodes){
    vector<int> label=read_vector<int>(nodes);
    vector<vector<pair<int,int>>> children(nodes);
    for(int i=1;i<nodes;i++){
      int parent,weight;
      cin>>parent>>weight;
      children[parent-1].push_back(make_pair(i,weight));
    }

    cout<<dfs(0,label,children,0)<<'\n';
  }
}

const long long prune=-1;

int dfs(int node,const vector<int>& label,const vector<vector<pair<int,int>>>& children,long long path){
  int bad=0;
  if(path>label[node])
    path=prune;
  if(path==prune)
    bad++;
  for(int i=0;i<children[node].size();i++){
    long long next_path=max(path+children[node][i].second,0LL);
    if(path==prune)
      next_path=prune;
    bad+=dfs(children[node][i].first,label,children,next_path);
  }
  return bad;
}

template<typename element_type>
std::vector<element_type> read_vector(int size){
  std::vector<element_type> ret(size);
  for(int i=0;i<size;i++)
    std::cin>>ret[i];
  return ret;
}
