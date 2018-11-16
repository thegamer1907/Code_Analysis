#include <bits/stdc++.h>
using namespace std;
const int maxn=1e2+10;
const int maxm=1e6+7;
int a[maxn];
int c[maxn];
int c1[maxn],c2[maxn];
int n,m;
int main()
{
    int n,b;
    while(~scanf("%d%d",&n,&b))
    {
        int cnt=0;
        memset(c1,0,sizeof(c1));
        memset(c2,0,sizeof(c1));
        memset(c,0,sizeof(c));
        for(int i=1; i<=n; ++i)
        {
            scanf("%d",&a[i]);
        }
        for(int i=1; i<=n; ++i)
        {
            if(a[i]&1)
                c1[i]=c1[i-1]+1,c2[i]=c2[i-1];
            else
                c2[i]=c2[i-1]+1,c1[i]=c1[i-1];
        }
        for(int i=1; i<n; ++i)
        {
            if((c1[i]==c2[i])&&(c1[n]-c1[i]==c2[n]-c2[i]))
                c[cnt++]=abs(a[i]-a[i+1]);
        }
        sort(c,c+cnt);
        int sum=0;
        int i=0;
        int ans=0;
        for(i=0;i<cnt;++i)
        {
            sum+=c[i];
            if(sum<=b)ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
