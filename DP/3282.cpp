#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007
#define N 100005

ll gcd(ll aa,ll bb){ if(aa==0) return bb; return(bb%aa,aa); }



int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long pref[65]={0};
    pref[0]=1;
    for(int i=1;i<62;i++)
    {
        pref[i]=pow(2,i)+pref[i-1];
    }
    ll l,r;
    cin>>l>>r;
    
    ll c1=0;
    for(int i=61;i>=0;i--)
    {
        ll d=pow(2,i);
        if(c1+d <=r)
            c1+=d;
    }
 //   cout<<c1<<endl;
    ll c2=0;

    for(int i=61;i>=0;i--)
    {
        ll x=pow(2,i);
        ll dd=c2+pref[i]-x;
        if(((c1&x)==0) && (c2+x)<=r)
        {
            c2+=x;
        }
        else if(dd<l)
        {
            c2+=x;
            if(c1-x >=l && ((c1&x)!=0))
                c1-=x;
        }
    }
//    cout<<c2<<endl;
    ll ans=c1^c2;
    cout<<ans<<endl;
    return 0;
}
