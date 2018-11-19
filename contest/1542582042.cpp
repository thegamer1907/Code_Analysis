#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100005][5];
int vis[20]={0};
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        int tmp=0;
        for(int j=1;j<=k;j++)
        {
            int x;
            scanf("%d",&x);
            tmp=tmp*2+x;
        }
        vis[tmp]++;
    }
    if(vis[0])
    {
        puts("YES");
        return 0;
    }
    int up=1<<4;
    for(int i=0;i<up;i++)
    {
        for(int j=i+1;j<up;j++)
        {
            if((i&j)==0&&vis[i]&&vis[j])
            {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
}
