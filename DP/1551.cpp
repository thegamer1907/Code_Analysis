#include <bits/stdc++.h>
using namespace std;
int n,a[107],ans,fsum;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
        for(int j=i;j<=n;j++)
        {
            int fsum=0;
            for(int k=1;k<=n;k++)
                if(k>=i&&k<=j)
                    fsum+=1-a[k];
                else fsum+=a[k];
            ans=max(ans,fsum);
        }
    printf("%d",ans);
    return 0;
}
