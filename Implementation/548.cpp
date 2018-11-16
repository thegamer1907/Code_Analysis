#include <bits/stdc++.h>
typedef long long LL;
using namespace std;
const int maxn=1e5+7;
const int INF=1e9+7;
int n,k;
int a[maxn];
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);

    int ans=0;
    for(int i=1;i<=n;i++)
        if(a[i]>0 && a[i]>=a[k])
            ans=i;
    printf("%d\n",ans);
    return 0;
}
