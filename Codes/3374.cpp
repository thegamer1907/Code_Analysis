#include<stdio.h>
#include<queue>
#include<algorithm>
using namespace std;
#define rep(i,j,k) for(long long i=j;i<=k;++i)
#define per(i,j,k) for(long long i=j;i>=k;--i)
#define MAXN 100005
long long a[MAXN];
typedef long long LL;
bool pan(long long n,long long k)
{
    long long sum=0LL,z=n;
    while(n)
    {
//        if(k==2)
//            printf("%I64d+++++\n",n);
        sum=sum+min(n,k);
        n=n-min(n,k);
        n=n-n/10;
    }
    if(sum*2>=z)
        return true;
    return false;

}
int main()
{
    long long n;
    while(scanf("%I64d",&n)!=EOF)
    {
        long long l=1LL,r=n,mid,ans=n;
        while(l<=r)
        {
            mid=(l+r)/2;
//            printf("%I64d++\n",mid);
            if(pan(n,mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        printf("%I64d\n",ans);
    }
}
