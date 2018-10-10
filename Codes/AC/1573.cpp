#include <iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#define INF 0x3f3f3f3f
typedef long long ll;
using namespace std;
const ll maxn=1e5+10;

struct node
{
    ll w;
    int id;
}val[maxn];

ll temp_val[maxn];

ll n,s;
ll sum;

ll solve(ll num)
{
    for(int i=1;i<=n;i++)
        temp_val[i]=val[i].w+val[i].id*num;
    sort(temp_val+1,temp_val+n+1);
    sum=0;
    for(int i=1;i<=num;i++)
        sum+=temp_val[i];
    if(sum>s)
        return 0;
    else
        return 1;
}


int main()
{
    scanf("%I64d %I64d",&n,&s);
    for(int i=1;i<=n;i++)
    {
         scanf("%I64d",&val[i].w);
         val[i].id=i;
    }
    ll l=0,r=n,mid;
    ll ans=0;
    ll ans1=0;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(solve(mid))
        {
             ans1=mid;
             ans=max(ans,sum);
             l=mid+1;
        }
        else
             r=mid-1;
    }
    printf("%I64d %I64d\n",ans1,ans);
    return 0;
}

