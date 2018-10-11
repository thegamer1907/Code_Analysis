#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;
ll n;
ll me=10;
bool check(ll i,ll n)
{
    ll a=0;
    ll b=0;
    while(n>0)
    {
        if(n>=i)
        {
            a+=i;
            n-=i;
            b+=(n/me);
            n-=(n/me);
        }
        else
        {
            a+=n;
            n=0;
        }
    }
    if(a>=b)
        return true;
    else
        return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n;
    if(n==1)
        cout<<"1";
    else
    {   ll ans;
        ll lo=1;
        ll hi=1000000000000000000;
        ll mid;
        while(lo<=hi)
        {
            mid=((lo+hi)>>1);
            if(check(mid,n))
                {
                    ans=mid;
                    hi=mid-1;
                }
            else
                lo=mid+1;
        }
        cout<<ans;
    }
    return 0;
}