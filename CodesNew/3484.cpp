#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n+5];
    int mx = -INFINITY;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        mx = max(mx,a[i]);
    }
    int extra=0;
    for(int i=0;i<n;i++)
    {
        extra+=(mx-a[i]);
    }
    extra = m-extra;
    if(extra<=0)
    {
        printf("%d %d\n",mx,mx+m);
    }
    else
    {
        int f = mx + (extra/n) + !(!(extra%n));
        printf("%d %d\n",f,mx+m);
    }

    return 0;
}


