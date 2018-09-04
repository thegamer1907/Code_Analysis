#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define inf 10000000000
#define mod1 1000000007
//ios_base::sync_with_stdio(0);
//cin.tie(0);
bool check(ll val,ll total)
{

    ll ans=0,save=total;
    ll type=1;
    while(total>0)
    {
        if(type)
        {
            if(total<val)
            {
                ans+=total;
                total=0;
                break;
            }
            ans+=val;
            total-=val;
        }
        else
        {
            if(total>9)
                total-=total/10;
        }
        // cout<<total<<endl;
        type=1-type;
    }
    total=save;
    //cout<<ans<<"-"<<endl;
    if(ans*2>=total)
        return true;
    return false;
}
int main()
{
    ll total;
    cin>>total;
    //check(3,68);
    ll lo=1,hi=total,mid;
    while(lo<=hi)
    {
        mid=(lo-hi)/2+hi;
        if(check(mid,total))
            hi=mid-1;
        else
            lo=mid+1;
    }
    cout<<lo<<endl;
}
