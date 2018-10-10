#include<bits/stdc++.h>
#define lli long long int

using namespace std;

lli n,m;
lli k;

lli getVal(lli val)
{
    lli sum=0;
    for(lli i=1;i<=n;i++)
    {
        lli uu=val/i;
        uu=min(uu,m);
        sum=sum+uu;
    }
    return sum;
}

lli getParVal(lli val)
{
    lli sum=0;
    for(lli i=1;i<=n;i++)
    {
        lli u=val/i;
        if(val%i==0 && u<=m) sum++;
    }
    return sum;
}

lli binS()
{
    lli l=1;
    lli h=n*m;
    lli mid;
    lli ans;
    while(l<=h)
    {
        mid=(l+h)/2;
        lli uu=getVal(mid);
        //lli vv=getParVal(mid);
        if(uu>=k)
        {
            ans=mid;
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }



    }
    return ans;

}

int main()
{

    scanf("%lld%lld%lld",&n,&m,&k);

    printf("%lld\n",binS());


    return 0;
}
