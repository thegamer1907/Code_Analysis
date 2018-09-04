#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define N 100010
long long a[N],s[N];
int n;
long long s1,s2;
int check(int x)
{
    int i,j,k;
    for(i=0;i<n;i++)
        s[i]=a[i]+(long long)(i+1)*x;
    sort(s,s+n);
    s1=0;
    for(i=0;i<x;i++)
    s1=s1+s[i];
    if(s1<=s2)
        return 1;
    else
        return 0;
}
int main()
{
    int i,j,k,l,r,mid,t;
    long long m,ans;
    scanf("%d%lld",&n,&s2);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    l=0;
    r=n;
    t=0;
    ans=0;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(check(mid))
        {
            if(mid>t)
            {
            t=mid;
            ans=s1;
            }
            l=mid+1;
        }
        else
            r=mid-1;
    }
    printf("%d %lld\n",t,ans);
    return 0;
}
