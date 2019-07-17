#include<iostream>
#include<math.h>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<cstring>
#include<string>
#include<stack>
using namespace std;
#define ll long long
ll n,m,k;
ll a[100010];
int main()
{
    scanf("%I64d%I64d%I64d",&n,&m,&k);
    for(int i=1;i<=m;i++)
    {
        scanf("%I64d",&a[i]);
    }
    ll ans=0;
    ll l=1,r=1;
    ll delsum=0;
    while(r<=m)
    {
        l=r;
        ll num;
        if((a[l]-delsum)%k==0)
        {
            num=(a[l]-delsum)/k;
        }
        else
        {
            num=(a[l]-delsum)/k+1;
        }
        for(int i=l;i<=m;i++)
        {
            if((a[i]-delsum)%k==0)
            {
                if((a[i]-delsum)/k==num)
                {
                    r=i;
                }
            }
            else
            {
                if((a[i]-delsum)/k+1==num)
                {
                    r=i;
                }
            }
        }
        ans++;
        delsum+=r-l+1;
        r++;
    }
    printf("%I64d\n",ans);
    return 0;
}