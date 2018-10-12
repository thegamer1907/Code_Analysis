#include <bits/stdc++.h>

using namespace std;
bool vis[(int)1e7+1]={};
int ans[(int)1e7+1]={},r[(int)1e7+1]={};
void sieve()
{
    for (int i=2;i<=1e7;i++)
    {
        if (vis[i]==0)
        {
            if (r[i])
                ans[i]+=r[i];
            for (int j=2;j*i<=1e7;j++)
            {
                vis[i*j]=1;
                ans[i]+=r[i*j];
            }
        }
    }
}
int main()
{
    int n,x,y;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&x);
        r[x]++;
    }
    sieve();
    for (int i=1;i<=1e7;i++)
        ans[i]+=ans[i-1];
    int m;
    scanf("%d",&m);
    for (int i=0;i<m;i++)
    {
        scanf("%d%d",&x,&y);
        printf("%d\n",ans[min(y,(int)1e7)]-ans[min(x-1,(int)1e7)]);
    }
    return 0;
}
