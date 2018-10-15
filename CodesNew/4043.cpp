#include<string.h>
#include<cstdio>
using namespace std;
long long v[200007],k[200007],q,n,ma,st,dr;
    long long cautbin(long long x, long long st,long long dr)
{
    while(st<=dr)
    {
        long long mid=(st+dr)/2;
        if(v[mid]<=x) st=mid+1;
        else dr=mid-1;
    }
    return dr;
}
int main()
{
    scanf("%lld %lld",&n,&q);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&v[i]);
        v[i]+=v[i-1];
    }
    long long cnt=0,cnt2=0;
    long long st=1;
    long long dr=n;
    for(int i=1;i<=q;i++)
    {
            scanf("%lld",&ma);
            long qq=cautbin(ma+cnt2,st+cnt,dr);
            if(qq>=n)
            {
                printf("%lld\n",n);
                cnt=0;
                cnt2=0;
            }
            else {
                    printf("%lld\n",n-qq);
                    cnt2+=ma;
                    cnt=qq;
                }


    }

}
