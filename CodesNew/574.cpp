#include<bits/stdc++.h>
using namespace std;
const int maxn=1e7+10;
bool vis[maxn];
int cnt[maxn],k,l,r;
int sign[10000020];
void init()
{
    memset(vis,0,sizeof(vis));
    memset(cnt,0,sizeof(cnt));
    vis[0]=vis[1]=1;
    for(int i=2; i<=maxn; i++)
    {
        if(!vis[i]&&i<=k)
        {
            cnt[i]+=sign[i];
            for(int j=i+i; j<=maxn; j+=i)
            {
                if(j>k)
                    break;
                vis[j]=1;
                cnt[i]+=sign[j];
            }
        }
    }
    for(int i=2; i<=k; i++)
    {
        cnt[i]=cnt[i-1]+cnt[i];
       // printf("cnt[%d]=%d\n",i,cnt[i]);
    }
}

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        k=0;
        int a;
        memset(sign,0,sizeof(sign));
        for(int i=0; i<n; i++)
        {
             scanf("%d",&a);
             sign[a]++;
             k=max(k,a);
        }
        init();
        int m;
        scanf("%d",&m);
        for(int i=1; i<=m; i++)
        {
            scanf("%d%d",&l,&r);
            r=min(r,k);
            if(l>r)
            {
                printf("0\n");
                continue;
            }
            int ans=cnt[r]-cnt[l-1];
            printf("%d\n",ans);
        }
    }
    return 0;
}
