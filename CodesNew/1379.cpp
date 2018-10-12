#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<map>
#include<vector>
#include<cstring>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;++i)
#define de(x) cout<<#x<<" = "<<x<<endl
#define pb push_back
#define fi first
#define se second
const int N = 1e6+7;
char str[150];
ll b,s,c,pb,ps,pc,mo,n1,n2,n3;
void fenjie(int len)
{
    rep(i,0,len)
    if(str[i]=='B') n1++;
    else if(str[i]=='S') n2++;
    else n3++;
}
bool check(ll mid)
{
    ll b1,s1,c1;
    b1=max(mid*n1-b,(ll)0);
    s1=max(mid*n2-s,(ll)0);
    c1=max(mid*n3-c,(ll)0);
    ll mm=b1*pb+s1*ps+c1*pc;

    if(mm>mo)
    {
        return false;
    }
    else return true;
}
void erfen()
{
    ll l=0,r=1e15,mid=0;
    while(l+1<r)
    {
        mid=(l+r)>>1;
        if(check(mid))
        {
            l=mid;
        }
        else r=mid;
    }
    if(check(l)&&check(r)) cout<<max(l,r);
    else if(check(l)) cout<<l<<endl;
    else cout<<r<<endl;
}
int main()
{

    while(~scanf("%s",str) )
    {
        n1=0;n2=0;n3=0;
        int len=strlen(str);
        fenjie(len);
        scanf("%I64d%I64d%I64d",&b,&s,&c);
        scanf("%I64d%I64d%I64d",&pb,&ps,&pc);
       // de(pb);de(ps);de(pc);
        scanf("%I64d",&mo);
        erfen();
    }
    return 0;
}
