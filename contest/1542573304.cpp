#include <bits/stdc++.h>
#define LL __int64

using namespace std;

const int Maxn=1e5+10;
const LL INF=1e16;
int n,k,p,a[Maxn],b[Maxn];
LL dp[22][Maxn];

void Solve(int l,int r,int Left,int Right,LL d)
{
    if (l>r) return;
//    printf("%d %d %d %d %I64d\n",l,r,Left,Right,d);
    int m=((l+r)>>1);
    LL sum=0;int w=m;
    for (int i=l; i<=m; i++) sum+=b[a[i]]++;
    for (int i=Left; i<=Right; i++) if (i<=m)
    {
        if (sum+d+dp[p-1][i-1]<dp[p][m]) dp[p][m]=sum+d+dp[p-1][i-1],w=i;
        sum-=--b[a[i]];
    } else break;
//    printf("m=%d %I64d\n",m,dp[p][m]);
    for (int i=l; i<=m; i++) b[a[i]]--;
    for (int i=Left; i<=Right; i++) if (i<=m)  b[a[i]]++; else break;
    Solve(l,m-1,Left,w,d);
    for (int i=l; i<=m; i++) d+=b[a[i]]++;
    for (int i=Left; i<w; i++) d-=--b[a[i]];
    Solve(m+1,r,w,Right,d);
    for (int i=l; i<=m; i++) b[a[i]]--;
    for (int i=Left; i<w; i++) b[a[i]]++;
}

int main()
{
//    freopen("f.in","r",stdin);
    for ( ; scanf("%d%d",&n,&k)!=EOF; )
    {
        for (int i=1; i<=n; i++) scanf("%d",&a[i]);
        for (int i=0; i<=k; i++)
        for (int j=0; j<=n; j++) dp[i][j]=INF;
        dp[0][0]=0;
        for (p=1; p<=k; p++) Solve(1,n,1,n,0);
        printf("%I64d\n",dp[k][n]);
    }
    return 0;
}
