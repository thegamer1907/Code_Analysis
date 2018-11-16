#include<bits/stdc++.h>
using namespace std;
int n,m,a[105],b[105],i,ans=0,j;
int main()
{
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&m);
    for (i=0;i<m;i++)
        scanf("%d",&b[i]);
    sort(a,a+n);
    sort(b,b+m);
    i=0;j=0;
    while (i!=n && j!=m)
        {
            if (abs(a[i]-b[j])<=1)
                {
                    i++;
                    j++;
                    ans++;
                    continue;
                }
            if (a[i]-b[j]>1)
                {
                    j++;
                    continue;
                }
            if (b[j]-a[i]>1)
                {
                    i++;
                    continue;
                }
            if (i==n || j==m)
                break;
        }
    printf("%d",ans);
}