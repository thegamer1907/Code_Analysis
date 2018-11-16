#include<bits/stdc++.h>
#define LMT 1000005
using namespace std;
set<int>q[LMT];
bool have[LMT];
int c[LMT],n,m;
int main(void)
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        q[i].clear();
        int x;
        scanf("%d",&x);
        c[i]=x;
        have[x]=1;
    }
    while(m--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(c[a]!=c[b])
        {
            q[c[a]].insert(c[b]);
            q[c[b]].insert(c[a]);
        }
    }
    int tem=-1,ans;
    for(int i=1;i<LMT;i++)
    if(have[i]&&tem<(int)q[i].size())
    {
        tem=q[i].size();
        ans=i;
    }
    printf("%d\n",ans);
    return 0;
}
