#include<bits/stdc++.h>
using namespace std;
#define     ll           long long
#define     sf(n)        scanf("%lld",&n)
#define     pf(n)        printf("%lld\n",&n)
#define     ct(p)        cout<<p<<endl
#define     mem(a)       memset(a,0,sizeof a)
#define     yes          cout<<"YES"<<endl
#define     no           cout<<"NO"<<endl
ll a[100000];
map<ll,ll>mp;
map<ll,ll>mp1;

///......................................///

int main()
{
    cin.sync_with_stdio(false);
    ll i,j,k,l,c,v,b,bv[1000],aa[1009],bb[1000],n,m,r,t,e,f;
    ll x1,x2,y1,y2,x3,x4,x5,x6;
    string s,s1,s2,s3,sss[10000];
    while(cin>>n)
    {
        double xc,cx,xx,mm,hh,ss;
        cin>>m>>c>>k>>l;
        ss=c;
        mm=m+(1.0/60)*ss;
        hh=5*(n+(1.0/60)*mm);
        // cout<<ss<<mm<<hh;
        xc=5*k;
        cx=5*l;
        if(xc>cx)
            swap(xc,cx);
            v=0;
        if(ss>=xc&&ss<=cx||mm>=xc&&mm<=cx||hh>=xc&&hh<=cx)
        {
            v++;
        }
        if(ss<=xc||ss>=cx||mm<=xc||mm>=cx||hh<=xc||hh>=cx)
        {
            v++;
        }
       if(v==1)
            yes;
            else
                no;

    }
}


