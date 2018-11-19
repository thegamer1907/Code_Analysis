#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;
#define ll long long
#define LL ll
#define next Next
const int maxn=1e5+10;
int a[maxn][4];
int vis[maxn];
int main()
{
    int n,k;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        memset(vis,0,sizeof(vis));
        for(int i=0;i<n;i++){
            int x=0;
            for(int j=0;j<k;j++) {
                scanf("%d",&a[i][j]);
                x=x*2+a[i][j];
            }
            vis[x]++;
        }
        bool flag=0;
        for(int i=0;i<16;i++)
        {
            for(int j=0;j<16;j++){
                if((i&j)==0){
                    if(i==j&&vis[j]>1) flag=1;
                    else if(vis[i]&&vis[j]) flag=1;
                }
            }
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
