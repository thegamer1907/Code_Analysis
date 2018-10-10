#include<bits/stdc++.h>
using namespace std;
int i,i0,n,m;
double a[1005],ans,l;
int main()
{
    while(scanf("%d %lf",&n,&l)!=EOF)
    {
        for(i=1;i<=n;i++)scanf("%lf",&a[i]);
        sort(a+1,a+n+1);
        ans=max(a[1]-0,l-a[n]);
        for(i=1;i<n;i++)
        {
            ans=max(ans,(a[i+1]-a[i])/2);
        }
        printf("%.9lf\n",ans);
    }
    return 0;
}
