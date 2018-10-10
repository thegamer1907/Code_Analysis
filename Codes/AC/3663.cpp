#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll rez,m,rub,v[3],n[3],p[3];
string a;

binsearch(ll l, ll r)
{
    --r;
    while (l<r)
    {
        ll x=0;
        ll vid=(l+r+1)/2;
        for (int i=0;i<3;++i)
            {x+=max(m,(v[i]*vid-n[i])*p[i]);}
        if (x>rub) {r=vid-1;} else {l=vid;}
    }
    cout<<l;
    return l;
}

int main()
{
    cin>>a;
    for (int i=0;i<a.length();++i)
    {
        if (a[i]=='B') {++v[0];}
        else if (a[i]=='S') {++v[1];}
        else {++v[2];}
    }
    cin>>n[0]>>n[1]>>n[2];
    cin>>p[0]>>p[1]>>p[2];
    cin>>rub;
    ll r=16;
    ll x=0;
    ll l=0;
    for (int i=0;i<3;++i) {x+=max(m,(v[i]*r-n[i])*p[i]);}
    while (x<rub)
    {
        l=r;
        r*=2;
        x=0;
        for (int i=0;i<3;++i) {x+=max(m,(v[i]*r-n[i])*p[i]);}
    }
    ll k=binsearch(l,r);
    return 0;
}
