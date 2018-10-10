#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define io    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

ll s,a[100005],n;
bool check(ll m)
{
    multiset<ll> ss;
    for(ll i=1;i<=n;i++)
    {
        ss.insert(a[i]+(m*i));
    }
    ll sum=0,cnt=0;
    for(auto it:ss)
    {
        if(cnt==m){break;}
        sum+=it;
        cnt++;
    }
    if(sum<=s){return 1;}
    return 0;

}

int main()
{
    io
    ll i,j;
    cin>>n>>s;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    ll lo,hi,mid;
    lo=0;hi=n;
    while(lo<hi)
    {
        mid = lo + (hi-lo+1)/2;
        if(check(mid))
        {
            lo = mid;
        }
        else
        {
            hi=mid-1;
        }
    }
    if(check(lo))
    {
        cout<<lo<<" ";
        multiset<ll> vv;
        for(i=1;i<=n;i++)
        {
            vv.insert(a[i]+(i*lo));
        }
        ll sum=0;
        ll cnt=0;
        for(auto it:vv)
        {
            if(cnt==lo){break;}
            sum+=it;
            cnt++;
        }
        cout<<sum;
        return 0;
    }
    cout<<0<<" "<<0;








    return 0;
}