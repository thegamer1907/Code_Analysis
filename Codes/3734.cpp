#include<bits/stdc++.h>
#define long long long
using namespace std;
long rb,rs,rc,ab,as,ac,pb,ps,pc,lo,mid,hi,dl;
string s;
bool check(long hm)
{
    long tmp=dl;
    if(rb*hm>ab)tmp-=((rb*hm)-ab)*pb;
    if(rc*hm>ac)tmp-=((rc*hm)-ac)*pc;
    if(rs*hm>as)tmp-=((rs*hm)-as)*ps;
    return tmp<0?false:true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>s;
    for(auto x:s)
    {
        if(x=='B')rb++;
        if(x=='S')rs++;
        if(x=='C')rc++;
    }
    cin>>ab>>as>>ac;
    cin>>pb>>ps>>pc;
    cin>>dl;

    lo=0;
    hi=1e14;

    while((hi-lo)>3)
    {
        mid=(lo+hi)/2;
        if(check(mid))lo=mid;
        else hi=mid;
    }
    long ans;
    for(long i=lo;i<=hi;i++)if(check(i))ans=i;
    cout<<ans<<endl;
    return 0;
}
