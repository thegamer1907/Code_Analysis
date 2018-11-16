#include<bits/stdc++.h>
using namespace std;

map<int,int>m;
bool visited[1000005]={};

void dfs(int s, int d, int n){
    if(s==d||s==n){
        visited[s]=true;
    }
    else if(visited[s]==false){
        visited[s]=true;
        dfs(s+m[s],d,n);
    }
}


int main(){
    int n, d, e;
    int tmp;
    cin>>n>>d;
    e=n-1;
    for(int i=1; i<=e; i++)
    {
        cin>>tmp;
        m[i]=tmp;
    }
    dfs(1,d,n);
    if(visited[d]==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
