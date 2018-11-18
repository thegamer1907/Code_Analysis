#include<cstdio>
#include<algorithm>
#include<cstring>
#include<iostream>
#include<sstream>
#define LL long long
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f
using namespace std;
const int maxn = 1e5+10;
int n,k;
int vis[maxn];
int falg;
struct node
{
    int a[4];
}N[maxn];
int pos[5];
void dfs(int deep,int va)
{
    if(deep==k){
        if(vis[va]){
            falg = 1;
        }
        return;
    }
    if(pos[deep]==1){
        dfs(deep+1,va);
    }
    else{
        dfs(deep+1,va|(1<<deep));
        dfs(deep+1,va);
    }
}
int main()
{
    while(~scanf("%d%d",&n,&k))
    {
        memset(pos,0,sizeof(pos));
        memset(vis,0,sizeof(vis));
        for(int i = 0;i<n;i++){
            int tmp = 0;
            for(int j = 0;j<k;j++){
                scanf("%d",&N[i].a[j]);
                tmp|=(N[i].a[j]<<j);
            }
            vis[tmp] = 1;
        }
        falg = 0;
        for(int i = 0;i<n;i++){
            int tmp = 0;
            for(int j = 0;j<k;j++){
                pos[j] = 0;
                if(N[i].a[j]==1){
                    pos[j] = 1;
                }
            }
            dfs(0,0);
            if(falg){
                break;
            }
        }
        if(falg){
            puts("YES");
        }
        else{
            puts("NO");
        }
    }
}
