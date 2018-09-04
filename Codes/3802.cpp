#include<bits/stdc++.h>
#define ll long long int
#define pii pair < int , pair < int , int > >
#define pi pair < int , int >
#define pp pair < ll , ll >
#define inf 1e18
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define si1(a) scanf("%d",&a)
#define si2(a,b) scanf("%d%d",&a,&b)
#define si3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sl1(a) scanf("%I64d",&a)
#define sl2(a,b) scanf("%I64d%I64d",&a,&b)
#define sl3(a,b,c) scanf("%I64d%I64d%I64d",&a,&b,&c)
#define popcount(a) __builtin_popcount(a)
using namespace std;

int main()
{
    string s;
    cin>>s;
    ll i,j,k;
    ll rb=0,rs=0,rc=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='B')
            rb++;
        else if(s[i]=='S')
            rs++;
        else
            rc++;
    }
    ll ib,is,ic;
    sl3(ib,is,ic);
    ll pb,ps,pc;
    sl3(pb,ps,pc);
    ll r;
    sl1(r);
    ll lo=0,hi=1e15;
    while(lo<hi)
    {
        ll mid=(lo+hi+1)/2;
        ll reqb=rb*mid;
        ll reqs=rs*mid;
        ll reqc=rc*mid;
        reqb=max(reqb-ib,(ll)0);
        reqs=max(reqs-is,(ll)0);
        reqc=max(reqc-ic,(ll)0);
        ll price=reqb*pb+reqs*ps+reqc*pc;
        if(price<=r)
            lo=mid;
        else
            hi=mid-1;
    }
    cout<<lo<<"\n";
    return 0;
}
