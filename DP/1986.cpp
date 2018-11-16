#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
#define dd double
int a[100005];
int v[100005];
int unq[100005];
int main()
{
    ll t,n,i,j,k,m,q;
    sc("%lld %lld",&n,&m);
    memset(unq,0,sizeof(unq));
    memset(v,0,sizeof(v));
    for(i=1;i<=n;i++)
    {
        sc("%d",&a[i]);
    }
    for(i=n;i>=1;i--)
    {
        if(v[a[i]]==0)
        {
          v[a[i]]=1;
          unq[i]=unq[i+1]+1;
        }
        else
            unq[i]=unq[i+1];

    }
    for(i=1;i<=m;i++)
    {
        sc("%lld",&k);
        pf("%d\n",unq[k]);
    }



}


