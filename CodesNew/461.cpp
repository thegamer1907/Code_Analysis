#include <bits/stdc++.h>
#define ll  long long int
#define pii pair< int, int >

using namespace std;

vector<ll> v;
vector<pii> vv;

int main()
{
    ll n,k;
    cin>>n>>k;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll s=0,ans=0;
    for(ll i=0,m=0,sum=0;i<n;i++)
    {
        sum+=v[i];
        m++;
        while(sum>k)
        {
            sum-=v[s];
            s=s+1;
            m--;
        }
            ans=max(ans,m);
    }
//    sort(vv.begin(),vv.end());
    cout<<ans<<endl;
    return 0;
}
