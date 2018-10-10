#include<bits/stdc++.h>
using namespace std;
int n,s,h;
struct node
{
    long long v,d;
} a[100005];
bool cmp(node x,node y)
{
    return x.v+h*x.d<y.v+h*y.d;
}
long long check(long long k)
{
    sort(a+1,a+n+1,cmp);
    long long sum=0;
    for(int i=1; i<=k; i++)
        sum+=a[i].v+k*a[i].d;
    return sum;
}
int main()
{
    while(~scanf("%d%d",&n,&s))
    {
        for(int i=1; i<=n; i++)
        {
            scanf("%I64d",&a[i].v);
            a[i].d=i;
        }
        long long l=0,r=n,mid=0,k=0;
        long long sum=0,m=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            h=mid;
            sum=check(mid);
            if(sum<=s)
                m=sum,k=mid,l=mid+1;
            else
                r=mid-1;
        }
        if(k==0)
            printf("0 0\n");
        else
            printf("%I64d %I64d\n",k,m);
    }
}
