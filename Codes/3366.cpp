#include<iostream>
#include<string>
#include<string.h>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
using namespace std;
long long n;

long long half(long long k)
{
    long long tmp=n,got=0;
    while (tmp)
    {
        if (tmp>k) {tmp-=k;got+=k;tmp-=tmp/10;}
        else {got+=tmp;break;}
    }
    if (got>=(n+1)/2) return 1;
    return 0;
}

int main()
{
    scanf("%I64d",&n);
    long long l=1,r=n,ans;
    while (l<r)
    {
        long long mid=(l+r)/2;
        if (half(mid)) r=mid;
        else l=mid+1;
    }
    printf("%I64d\n",l);
    return 0;
}