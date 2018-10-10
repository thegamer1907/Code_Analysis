#include<bits/stdc++.h>
#define pb push_back
using namespace std;
#define ll long long
const int maxn=1e5+5;
ll n;
bool judge(ll x)
{
    ll yu=n;
    ll sum=0;
    while(yu>0)
    {
        if(yu>x)
        {
            sum+=x;yu-=x;
        }
        else
        {
            sum+=yu;yu=0;
        }
        yu-=yu/10;
    }
    return sum>=n/2+n%2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n;
    ll l=1,r=n;
    while(l<=r)
    {
      //  cout<<l<<" "<<r<<endl;
        ll m=(l+r)>>1;
        if(judge(m))r=m-1;
        else l=m+1;
    }
    ll ans=l;
   // cout<<l<<endl;
    for(ll i=l-1;i>=1;i--)
    {
        if(judge(i))ans--;
        else break;
    }
    cout<<ans<<endl;
   return 0;
}
