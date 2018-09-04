#include<stdio.h>
#include<string.h>
using namespace std;
#define ll __int64
ll nb,ns,nc;
ll pb,ps,pc;
ll Have;
char a[1050000];
int Slove(ll mid)
{
    ll needb=0,needs=0,needc=0;
    int n=strlen(a);
    for(int i=0;i<n;i++)
    {
        if(a[i]=='B')
        {
            needb++;
        }
        if(a[i]=='S')
        {
            needs++;
        }
        if(a[i]=='C')
        {
            needc++;
        }
    }
    needb*=mid;
    needc*=mid;
    needs*=mid;
    needb-=nb;
    needc-=nc;
    needs-=ns;
    if(needb<0)needb=0;
    if(needc<0)needc=0;
    if(needs<0)needs=0;
    if(needb*pb+needc*pc+needs*ps<=Have)return 1;
    else return 0;
}
int main()
{
    while(~scanf("%s",a))
    {
        scanf("%I64d%I64d%I64d%I64d%I64d%I64d",&nb,&ns,&nc,&pb,&ps,&pc);
        scanf("%I64d",&Have);
        ll ans=0;
        ll l=0;
        ll r=1e15;
        while(r-l>=0)
        {
            ll mid=(l+r)/2;
            if(Slove(mid))
            {
                l=mid+1;
                ans=mid;
            }
            else r=mid-1;
        }
        printf("%I64d\n",ans);
    }
}
