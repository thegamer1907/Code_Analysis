#include<string.h>
#include<cstdio>
using namespace std;
long long v[200007],ma;
int n,st,dr,q;
    int cautbin(long long x, int st,int dr)
{
    while(st<=dr)
    {
        int mid=(st+dr)/2;
        if(v[mid]<=x) st=mid+1;
        else dr=mid-1;
    }
    return dr;
}
int main()
{
    scanf("%d %d",&n,&q);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&v[i]);
        v[i]+=v[i-1];
    }
    long long cnt2=0;
    int st=1,cnt=0;
    int dr=n;
    for(int i=1;i<=q;i++)
    {
            scanf("%lld",&ma);
            int qq=cautbin(ma+cnt2,st+cnt,dr);
            if(qq>=n)
            {
                printf("%d\n",n);
                cnt=0;
                cnt2=0;
            }
            else {
                    printf("%d\n",n-qq);
                    cnt2+=ma;
                    cnt=qq;
                }


    }

}
