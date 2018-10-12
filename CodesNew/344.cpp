#include <bits/stdc++.h>

using namespace std;

const int maxn=1e5+10;
int l[maxn],d[maxn],sum,n,t;

int main()
{
    memset(l,0,sizeof(l));
    memset(d,0,sizeof(d));
    scanf("%d%d",&n,&t);
    for (int i=1;i<=n;i++) scanf("%d",&l[i]);
    d[0]=1; l[0]=sum=0;
    int j=1;
    for (int i=1;i<=n;i++)
    {
        d[i]=d[i-1]-1;
        sum-=l[i-1];
        for (;j<=n;j++)
            if (sum+l[j]<=t)
        {
            sum+=l[j];
            d[i]++;
        }
        else break;
    }
    int ans=d[1];
    for (int i=2;i<=n;i++) ans=max(ans,d[i]);
    printf("%d\n",ans);
    return 0;
}
