#include <stdio.h>
#include <algorithm>
using namespace std;

long long w[500001],num[500001];
long long n,s;

void binsearch();
long long calculate(long long p);

int main()
{
    long long i;
    while(scanf("%lld%lld",&n,&s)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&w[i]);
        }
        binsearch();
    }
    return 0;
}

void binsearch()
{
    long long l,m,r,i,sum;
    l=0,r=n,sum=0;
    while(l<r)
    {
        m=(l+r+1)/2;
        sum=calculate(m);
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
        num[i]=w[i]+i*l;
    }
    sort(num+1,num+n+1);
    sum=0;
    for(i=1;i<=l;i++)
    {
        sum+=num[i];
    }
    printf("%lld %lld\n",l,sum);
    return;
}

long long calculate(long long p)
{
    long long i,sum;
    for(i=1;i<=n;i++)
    {
        num[i]=w[i]+i*p;
    }
    sort(num+1,num+n+1);
    sum=0;
    for(i=1;i<=p;i++)
    {
        sum+=num[i];
    }
    return sum;
}
