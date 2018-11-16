#include<bits/stdc++.h>
using namespace std;
struct node{
    int parent;
    int depth;
    vector<int> children;
};
vector<node> nodes;
void build(int ind){
    nodes[ind].depth=1;
    for(int i = 0 ; i < nodes[ind].children.size() ; i ++){
        int ni=nodes[ind].children[i];
        build(ni);
        nodes[ind].depth=max(nodes[ind].depth,nodes[ni].depth+1);
    }
}
int main(){
    int n,rez=0;
    cin>>n;
    nodes.resize(n);
    for(int i = 0,a ; i < n ; i ++){
        cin>>a;
        if(a>=0)a--;
        nodes[i].parent=a;
        if(a>=0)nodes[a].children.push_back(i);
    }
    for(int i = 0 ; i < n ; i ++){
        if(nodes[i].parent<0){
            build(i);
            rez=max(rez,nodes[i].depth);
        }
    }
    cout<<rez;
}
