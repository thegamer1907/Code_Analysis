#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct node
{
    ll c;
    int id;
};

node w[100010];
ll ww[100010];
ll s,ans2;
int n,ans1;

void binsearch();
ll calculate(ll m);

int main()
{
    int i;
    while(scanf("%d%lld",&n,&s)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&w[i].c);
            w[i].id=i;
        }
        binsearch();
        printf("%d %lld\n",ans1,ans2);
    }
    return 0;
}

void binsearch()
{
    ll t;
    ll l,r,m;
    ans1=0,ans2=0,l=1,r=n;
    while(l<=r)
    {
        m=(l+r)/2;
        t=calculate(m);
        if(t!=0)
        {
            ans1=m;
            ans2=t;
            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
    return;
}

ll calculate(ll m)
{
    ll sum;
    int i;
    for(i=1;i<=n;i++)
    {
        ww[i]=w[i].c+w[i].id*m;
    }
    sort(ww+1,ww+n+1);
    sum=0;
    for(i=1;i<=m;i++)
    {
        sum+=ww[i];
    }
    if(sum<=s) return sum;
    else return 0;
}