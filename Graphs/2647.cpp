#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
struct node{
    vector<int> t;
};
int rez=0;
vector<bool> v;
vector<node> nodes;
void build(int index){
    for(int i = 0 ; i < nodes[index].t.size() ; i ++){
        int ni=nodes[index].t[i];
        bool a=v[ni];
        v[ni]=true;
        if(!a)build(ni);
    }
}
int main(){
    int n;cin>>n;
    v.resize(n);
    nodes.resize(n);
    for(int i = 0,a ; i < n ; i ++){
        cin>>a;
        nodes[i].t.push_back(a-1);
        nodes[a-1].t.push_back(i);
    }
    for(int i = 0 ; i < n ; i ++){
        if(!v[i]){
            v[i]=true;
            rez++;
            build(i);
        }
    }
    cout<<rez;
}
