#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+10;


int main()
{
    int vis[200],n,k;
    while (~scanf("%d %d",&n,&k)){
        memset(vis,0,sizeof(vis));
        for (int i=0;i<n;i++){
            int tmp,cir=0;
            for (int j=k-1;j>=0;j--){
                scanf("%d",&tmp);
                tmp=1-tmp;
                if (tmp)
                    cir+=(1<<j);
            }
            //printf("%d\n",cir);
            vis[cir]=1;
        }
        int f=0;
        if (vis[(1<<k)-1])
            f=1;
        for (int i=0;i<=(1<<k)-1;i++)
        {
            if (vis[i])
            {
                for (int j=i;j<=(1<<k)-1;j++)
                {
                    if (vis[j]&&(i|j)==(1<<k)-1){
                        f=1;
                        break;
                    }
                }
            }
            if (f)
                break;
        }
        if (f)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
