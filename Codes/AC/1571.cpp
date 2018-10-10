#include <stdio.h>
#include <algorithm>
using namespace std;

long long w[500001],num[500001];
long long n,s;

int main()
{
    long long sum;
    long long i,j,l,m,r;
    while(scanf("%lld%lld",&n,&s)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&w[i]);
        }
        l=0,r=n;
        while(l<r)
        {
            m=(l+r+1)/2;
            sum=0;
            for(i=1;i<=n;i++)
            {
                num[i]=w[i]+(long long)(i*m);
            }
            sort(num+1,num+n+1);
            sum=0;
            for(i=1;i<=m;i++)
            {
                sum+=num[i];
            }
            if(sum>s)
            {
                r=m-1;
            }
            else
            {
                l=m;
            }
        }
        for(i=1;i<=n;i++)
        {
            num[i]=w[i]+(long long)(i*l);
        }
        sort(num+1,num+n+1);
        sum=0;
        for(i=1;i<=l;i++)
        {
            sum+=num[i];
        }
        printf("%lld %lld\n",l,sum);
    }
    return 0;
}
