#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

typedef long long ll;





int main()
{
    ll n,m,k;
    cin>>n>>m>>k;


    ll l=1;
    ll r=m*n;

    ll mid,ans;

    while(l<=r)    {
        mid=(l+r)/2;

        ll cnt=0;

        for(ll i=1;i<=n;i++)    {
            cnt+=min(m,(mid-1)/i);
        }

        if(cnt<k)    {
            ans=mid;
            l=mid+1;
        }
        else    r=mid-1;
    }

    cout<<ans<<endl;

    return 0;
}
