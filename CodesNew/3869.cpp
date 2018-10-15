#include<iostream>
#include<cstdio>
#define INF LL(9e12)
using namespace std;
typedef long long LL;
LL N,a,sum,l=-INF,r=INF,m;
int main(){
    scanf("%I64d",&N);
    for(int i=1;i<=N;i++)
    {
        scanf("%I64d",&a);
        sum+=a;
        l=max(l,a);
    }
    while(r-l>100)
    {
        m=(l+r)>>1;
        if((N-1)*m>=sum)
            r=m-1;
        else
            l=m+1;
    }
    for(m=l;m<=r;m++)
        if((N-1)*m>=sum)
        {
            printf("%I64d",m);
            return 0;
        }
    return 0;
} 