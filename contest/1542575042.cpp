#include<bits/stdc++.h>
#define UP(i,l,h) for(int i=l;i<h;i++)
#define W(t) while(t)
#define MEM(a,b) memset(a,b,sizeof(a))
#define MAXN 100010
#define INF 0x3f3f3f3f
using namespace std;

bool vis[30];

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    MEM(vis,false);
    UP(i,0,n){
        int now=0;
        UP(j,0,m){
            int x;
            scanf("%d",&x);
            if(x)
            now|=(1<<j);
        }
        vis[now]=true;
    }
    bool can=false;
    UP(i,0,16){
        UP(j,0,16){
            if(!(i&j)&&vis[i]&&vis[j])
            {
                can=true;
                 break;
            }
        }
        if(can) break;
    }
    if(can) puts("YES");
    else puts("NO");
}
