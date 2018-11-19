#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int vis[20][20]={0};

int main()
{
    for(int i=0;i<16;i++)
    {
        for(int j=0;j<16;j++)
        {
            int ff=1;
            for(int k=0;k<4;k++)
            {
                if((i<<k)&(j<<k))
                {
                    ff=0;
                    break;
                }
            }
            if(ff)
            {
                vis[i][j]=vis[j][i]=1;
            }
        }
    }
    int mp[20]={0};
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        int a[5]={0};
        for(int j=0;j<k;j++)
        {
            scanf("%d",&a[j]);
        }
        int te=0;
        for(int j=0;j<4;j++)
        {
            te*=2;
            te+=a[j];
        }
        mp[te]=1;
    }
    for(int i=0;i<16;i++)
    {
        for(int j=0;j<16;j++)
        {
            if(mp[i]&&mp[j]&&vis[i][j])
            {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");

}
