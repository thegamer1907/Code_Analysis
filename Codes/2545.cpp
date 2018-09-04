#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAXN 10000001
int spf[MAXN];
int fact[MAXN];
long ans[MAXN];
void sieve()
{
    spf[1] = 1;fact[1]=0;
    for (int i=2; i<MAXN; i++)
    {
        spf[i] = i;
        fact[i]=0;
    }
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;

    for (int i=3; i*i<MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (int j=i*i; j<MAXN; j+=i)

                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}


void getFactorization(int x)
{
    int y=0;
    while (x!=1)
    {
        if(spf[x]!=y)
        {
            fact[spf[x]]++;
        }
        y=spf[x];
        x = x / spf[x];
    }

}


int main() {
    sieve();
    int i;
    int n;
    scanf("%d",&n);
    int x;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        getFactorization(x);
    }
    long count=0;
    ans[1]=0;
    for(i=2;i<MAXN;i++)
    {
        count+=fact[i];
        ans[i]=count;
    }
    int t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long l,r;
        scanf("%ld %ld",&l,&r);
        if(l>=(MAXN))
        {
            l=MAXN-1;
        }
        if(r>=(MAXN))
        {
            r=MAXN-1;
        }
        printf("%ld\n",ans[r]-ans[l-1]);

    }
    return 0;
}
