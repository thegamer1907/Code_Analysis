#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
char str[510];
int a[510][510],f[510][510];
int main()
{
    int i,j,k,l,m,n,cnt;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        scanf("%s",str);
        for(j=1;j<=m;j++)
            a[i][j]=str[j-1]=='.'?1:0;
    }
    int x1,x2,y1,y2;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        { 
            cnt=0;
            if(a[i][j])
            {
                cnt+=a[i][j-1]+a[i-1][j];
            }
            f[i][j]=f[i-1][j]+f[i][j-1]-f[i-1][j-1]+cnt;
        }
    scanf("%d",&l);
    while(l--)
    {
        int ans=0;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        ans=f[x2][y2]-f[x2][y1]-f[x1][y2]+f[x1][y1];
        for(i=x1;i<x2;i++)
            if(a[i][y1]+a[i+1][y1]==2)
                ans++;
        for(i=y1;i<y2;i++)
            if(a[x1][i]+a[x1][i+1]==2)
                ans++;
        printf("%d\n",ans);
    }
    return 0;
}
