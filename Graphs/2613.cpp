#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e4 + 7;
int p[maxn];
int Find(int x)
{
    return p[x]==x?p[x]:p[x]=Find(p[x]);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
        p[i] = i;

    for(int i=1;i<=n;++i)
    {
        int u;
        scanf("%d",&u);
        p[Find(u)] = Find(i);
    }
    int ans = 0 ;
    for(int i=1;i<=n;++i)
    {
        if(p[i]==i)ans++;
    }
    printf("%d\n",ans);

    return 0;
}
