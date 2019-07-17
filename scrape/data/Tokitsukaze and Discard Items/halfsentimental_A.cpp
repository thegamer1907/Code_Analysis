#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
#include<cstring>
using namespace std;
#define ll long long
ll a[100005];
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    for(ll i=0;i<m;i++)
    {
        cin>>a[i];
    }
    ll j=0;
    ll i=m;
    ll t=k;
    ll ans=0;
    ll cha=0;
    while(i!=0)
    {
        ll fl=0;
        cha=0;
        while(a[j]<=t&&i!=0)
        {
            fl=1;
            j++;
            i--;
            cha++;
        }
        if(fl==1)ans++;
        if(i==0)break;
        t=t+cha;
        //cout<<t<<endl;
        if(a[j]>t)
        {
            ll x=(a[j]-t-1)/k;
            t=t+k*(x+1);
        }
       // cout<<t<<endl;

    }
    cout<<ans<<endl;

    return 0;
}