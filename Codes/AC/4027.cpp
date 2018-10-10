#include<stdio.h>
#include<algorithm>
using namespace std;
int fk[100005];
int a[3][100005],dp[3][100005];
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int i,j;
        for(i=1; i<=n; i++)
        {
            fk[i]=0;
            for(j=0; j<m; j++)
            {
                scanf("%d",&a[i%2][j]);
                if(i==1||a[i%2][j]<a[(i-1)%2][j])
                    dp[i%2][j]=1;
                else
                    dp[i%2][j]=dp[(i-1)%2][j]+1;
                fk[i]=max(fk[i],dp[i%2][j]);
            }
        }
        int k;
        scanf("%d",&k);
        int l,r;
        for(i=0; i<k; i++)
        {
            scanf("%d %d",&l,&r);
            if(r-l+1<=fk[r])
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
}
