#include<stdio.h>
#include<math.h>
long long n;
bool check(long long x)
{
    long long m=n,sum=0;
    while(m>0)
    {
        if(m>=x)
        {
            m-=x;
            sum+=x;
        }
        else
        {
            sum+=m;
            m=0;
        }
         m-=m/10;
    }
    if(n%2==1&&sum>=n/2+1LL)
        return true;
    if(sum>=n/2&&n%2==0)
        return true;
    return false;
}
int main()
{
    while(~scanf("%I64d",&n))
    {
        long long l=1,r=n,mid,m=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(check(mid))
            {
                m=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        printf("%I64d\n",m);
    }
}
