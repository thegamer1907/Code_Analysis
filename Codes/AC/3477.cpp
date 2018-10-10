#include <bits/stdc++.h>
#define LL long long
using namespace std;

const int maxn = 1e5+100;
const int mod = 1e9+7;
const int INF=0x3f3f3f3f;


bool is_ok(LL x,LL n)
{
    LL y=n;
    LL cnt=0;
    while(n>0)
    {
        if(n>=x)
        {
            n-=x;
            cnt+=x;
        }
        else
        {
            cnt+=n;
            n=0;
        }
        n-=n/10;
    }
    if(cnt*2>=y) return true;
    return false;
}
int main()
{
    LL n,m,i,j,k,x,y,T;
    scanf("%lld",&n);
    LL l,r,mid;
    l=0,r=n;
    while(r-l>1)
    {
        mid=(r+l)/2;
        if(is_ok(mid,n)) r=mid;
        else l=mid;
    }
    printf("%lld\n",r);
    return 0;
}
