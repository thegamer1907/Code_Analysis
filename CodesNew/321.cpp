#include<bits/stdc++.h>
using namespace std;
int n,t,a[100005],i,ans=0,l=1,r=0;
main()
{
    scanf("%d%d",&n,&t);
    for (i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            ans+=a[i];
            if (ans>t)
                ans-=a[l++];
            r=max(r,i-l+1);
        }
    printf("%d",r);
}