/*
codeforces problem tags(BFS, DFS, Dijkstra ahmed ali)
problem url:
http://codeforces.com/problemset/problem/500/A

done by: SUMAN KUMAR(suman9868)
date: 26 september 2018
time: 1 pm
*/
#include <iostream>
#include <vector>
using namespace std;

int dfs(int i,int j,vector<int> &v, int t){
    if(v[i] == t)
        return 1;
    if(i>j)
        return 0;
    if(v[i] > t)
        return 0;
    if(dfs(v[i],j,v,t) == 1)
        return 1;
    return 0;
}

int main(){
    int n,t;
    cin>>n>>t;
    vector<int> v(n+1, 0);
    for(int i=1; i<=n-1; i++)
        cin>>v[i];
    for(int i=1; i<=n-1; i++)
        v[i] += i;
    if(t==1)
        cout<<"YES";
    else{
        int flag = dfs(1,n-1,v,t);
        if(flag == 1)
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}