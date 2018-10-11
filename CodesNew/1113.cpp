#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<queue>
#include<algorithm>
using namespace std;
typedef long long ll;
bool check(ll x,ll k)
{
    ll num1=0,num2=0;
    while(x)
    {
        if(x>=k)
        {
            num1+=k;
            x-=k;
        }
        else
        {
            num1+=x;
            x=0;
        }
        if(x>=10)
        {
            num2+=x/10;
            x-=x/10;
        }
    }
    if(num1>=num2)
        return true;
    else
        return false;
}
int main()
{
    ll n;
    scanf("%lld",&n);
    ll l=1,r=n;
    while(l<r)
    {
        ll m=l+r>>1;
        if(check(n,m))
            r=m;
        else
            l=m+1;
    }
    printf("%lld\n",l);
    return 0;
}
