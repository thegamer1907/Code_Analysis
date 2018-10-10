#include<stdio.h>
#include<algorithm>
using namespace std;
long long a[100005],b[100005];
long long n;
long long pan(long long x)
{
    long long sum=0,i,j;
    for(i=1; i<=n; i++)
        b[i]=a[i]+x*i;
    sort(b+1,b+1+n);
    for(i=1; i<=x; i++)
        sum+=b[i];
    return sum;
}
int main()
{
    long long m;
    while(scanf("%I64d%I64d",&n,&m)!=EOF)
    {
        long long i,j;
        for(i=1; i<=n; i++)
        {
            scanf("%I64d",&a[i]);
        }
        long long l=1,r=n,mid;
        while(l<r)
        {
            mid=(l+r)/2;
            if(pan(mid)<=m)
                l=mid+1;
            else
                r=mid-1;
        }
        while(pan(l)>m)
            l--;
        printf("%I64d %I64d\n",l,pan(l));
    }
}
