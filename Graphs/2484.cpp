#include<bits/stdc++.h>
using namespace std;
int color[10005],tag[10005];
vector<int>G[10005];
int cnt=0;
void dfs(int x,int fa)
{
    if(color[x]!=tag[x]){
        cnt++;tag[x]=color[x];
    }
    for(auto a:G[x]){
        if(a==fa)continue;
        tag[a]=color[x];
    }
    for(auto a:G[x]){
        if(a!=fa)
            dfs(a,x);
    }
}
int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=1;i<n;i++){
        cin>>j;
        G[i+1].push_back(j);G[j].push_back(i+1);
    }
    for(i=1;i<=n;i++)scanf("%d",&color[i]);
    dfs(1,-1);
    cout<<cnt<<endl;

    return 0;
}