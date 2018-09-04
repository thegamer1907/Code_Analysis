#include <bits/stdc++.h>

using namespace std;

int a[100010],b[100010],c[100010];

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            int x;
            scanf("%d",&x);
            b[j]=1+(x>=a[j]?b[j]:0);
            a[j]=x;
            c[i]=max(c[i],b[j]);
        }
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        if(c[r]>=r-l+1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
