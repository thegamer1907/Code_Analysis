#include<bits/stdc++.h>
using namespace std;
long long n;
long long bsch(long long l,long long r)
{
    long long mid,res;
    while(l<=r){
        mid=(l+r)/2;
        long long nn=n,sum1=0;
        while(nn){
            if(nn>=mid) nn-=mid,sum1+=mid;
            else sum1+=nn,nn=0;
            nn=nn-nn/10;
        }
        if(sum1>=(n+1)/2) res=mid,r=mid-1;
        else l=mid+1;
    }
    return res;
}
int main()
{
    scanf("%lld",&n);
    printf("%lld\n",bsch(1,n));
    return 0;
}
