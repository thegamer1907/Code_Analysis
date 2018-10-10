#include <bits/stdc++.h>
using namespace std;
int v[100010];
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
        if (i==0)continue;
        v[i]+=v[i-1];
    }
    int m;
    scanf("%d",&m);
    for (int i=1;i<=m;i++)
    {
        int k;
        scanf("%d",&k);
        printf("%d\n",lower_bound(v,v+n,k)-v+1);
    }
    return 0;
}
