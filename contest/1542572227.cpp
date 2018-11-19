#include<bits/stdc++.h>
using namespace std;
bool vis[25];
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;++i)
    {
        int ret=0;
        for(int j=0;j<k;++j)
        {
            int x;
            scanf("%d",&x);
            ret=(ret<<1)+x;
        }
        if(!ret) {puts("YES");exit(0);}
        for(int j=0;j<(1<<k);++j)
            if(vis[j]&&(!(ret&j)))
            {
                puts("YES");
                exit(0);
            }
        vis[ret]=true;
    }
    puts("NO");
    return 0;
}
