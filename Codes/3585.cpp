#include<bits/stdc++.h>
using namespace std;
#define LL long long
const LL inf=0x3f3f3f3f3f3f3f;
int a[200005],b[200005],c[200005],d[200005];
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int x,s;
    scanf("%d%d",&x,&s);
    for(int i=0;i<m;i++) scanf("%d",&a[i]);
    for(int i=0;i<m;i++) scanf("%d",&b[i]);
    for(int i=1;i<=k;i++) scanf("%d",&c[i]);
    for(int i=1;i<=k;i++) scanf("%d",&d[i]);
    LL ans=1ll*x*n;
    int tmp=upper_bound(d+1,d+k+1,s)-d;
    ans=min(ans,1ll*(n-c[tmp-1])*x);
    for(int i=0;i<m;i++){
        if(s-b[i]<0) continue;
        int tt=upper_bound(d+1,d+k+1,s-b[i])-d-1;
        ans=min(ans,1ll*a[i]*(n-c[tt]));
    }
    printf("%lld\n",ans);
    return 0;
}
