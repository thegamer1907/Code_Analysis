#include<bits/stdc++.h>

using namespace std;
#define ll long long
int a[200000];
ll b[200000];
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=0,r=n,mid;
    ll ans,sum,t;
    while(l<=r)
    {
        mid=(r+l)/2;
        sum=0;
        for(int i=1;i<=n;i++)
         b[i]=a[i]+i*(ll)mid;
         sort(b+1,b+n+1);
         for(int i=1;i<=mid;i++)
         {
             sum+=b[i];
         }
         if(sum>k)
         {
             r=mid-1;
         }
         else {
            l=mid+1;
            t=mid;
            ans=sum;
         }
    }
    printf("%lld %lld",t,ans);
}
