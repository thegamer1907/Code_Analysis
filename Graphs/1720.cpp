#include<bits/stdc++.h>
using namespace std;
vector<int>v[100004];
int visit[100004];
void dfs(int parent){
    visit[parent]=1;
    for(int j=0;j<v[parent].size();j++){
        int x=v[parent][j];
        if(visit[x]==0){
            dfs(x);
        }
    }
}
int main (){
    int n,t;
    //freopen("input.txt","r",stdin);
    cin>>n>>t;
    for(int i=1;i<n;i++){
        int a;
        cin>>a;
        v[i].push_back(a+i);
    }
    dfs(1);
    cout<<(visit[t]?"YES":"NO")<<endl;
    return 0;
}
