#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
const int N=3e4+10;
vector<int>a[N];
bool vis[N];
int x;
void dfs(int x)
{
    vis[x]=1;
    for(int i=a[x].size()-1;~i;i--){
        int y=a[x][i];
        if(!vis[y])
            dfs(y);
    }
}
int main()
{
    int n,t;
    while(~scanf("%d%d",&n,&t)){
        for(int i=1;i<n;i++){
            scanf("%d",&x);
            a[i].push_back(i+x);
        }
        dfs(1);
        puts(vis[t]?"YES":"NO");
    }
    return 0;
}
