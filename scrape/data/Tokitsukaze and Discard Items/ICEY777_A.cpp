#include<iostream>
#include<math.h>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<cstring>
#include<string>
#include<stack>
using namespace std;
#define ll long long
ll n,m,k;
ll a[100010];
int main()
{
    scanf("%I64d%I64d%I64d",&n,&m,&k);
    for(int i=1;i<=m;i++)
    {
        scanf("%I64d",&a[i]);
    }
    ll ans=0;
    ll now;
    ll delsum=0;
    if((a[1]-delsum)%k==0)
    {
        now=(a[1]-delsum)/k;
    }
    else
    {
        now=(a[1]-delsum)/k+1;
    }
    int l=1;
    for(int i=1;i<=m;i++)
    {
        ll x;
        if((a[i]-delsum)%k==0)
        {
            x=(a[i]-delsum)/k;
        }
        else
        {
            x=(a[i]-delsum)/k+1;
        }
        if(x==now)
        {
            continue;
        }
        else
        {
            delsum+=i-l;
            ans++;
            l=i;
            if((a[i]-delsum)%k==0)
            {
                now=(a[i]-delsum)/k;
            }
            else
            {
                now=(a[i]-delsum)/k+1;
            }
        }
    }
    printf("%I64d\n",ans+1);
    return 0;
}