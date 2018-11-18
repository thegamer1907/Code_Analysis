#include<cstdio>
#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
#define N 60
#define INF 1e9
vector<int>g[N];
int i,j,k,n,m,p,a[N],c[N][N],f[2][N];
int dp[N][N][N][N];
int x,y,z,Rt,Ans=INF;
inline void Dfs(int x,int y){
    for(int i=0;i<g[x].size();i++)
    if(g[x][i]!=y)Dfs(g[x][i],x),a[x]+=a[g[x][i]];
}
inline int Solve(int x,int y,int s1,int s2){
    if(!s1&&!s2)return 0;
    if(!s1)return INF;
    int& A=dp[x][y][s1][s2];
    if(A<INF)return A;
    if(g[y].size()==1)return (A=Solve(y,x,s2,0)+c[x][y]);
    for(int i=0;i<g[y].size();i++)
    if(g[y][i]!=x)
    for(int k=0;k<=s1;k++)Solve(y,g[y][i],k,s1+s2-k);
    memset(f[1],0,sizeof(f[1]));
    f[1][0]=INF;
    bool b=0;
    for(int i=0;i<g[y].size();i++){
        int v=g[y][i];
        if(v==x)continue;
        memset(f[b],0,sizeof(f[b]));
        for(int j=0;j<=s1;j++)
        for(int k=0;k+j<=s1;k++)
        f[b][j+k]=max(f[b][j+k],min(f[b^1][j],Solve(y,v,k,s1+s2-k)));
        b^=1;
    }
    return (A=f[b^1][s1]+c[x][y]);
}
int main(){
    scanf("%d",&n);
    for(i=1;i<n;i++){
        scanf("%d%d%d",&x,&y,&z);
        g[x].push_back(y);g[y].push_back(x);
        c[x][y]=c[y][x]=z;
    }
    scanf("%d%d",&Rt,&m);
    for(i=1;i<=m;i++)scanf("%d",&x),a[x]++;
    Dfs(Rt,0);
    memset(dp,0x3f,sizeof(dp));
    for(i=0;i<g[Rt].size();i++)Ans=min(Ans,Solve(Rt,g[Rt][i],a[g[Rt][i]],m-a[g[Rt][i]]));
    cout<<Ans<<endl;
    return 0;
}