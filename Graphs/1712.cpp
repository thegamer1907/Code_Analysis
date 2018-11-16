#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,k;
    cin>>n>>k;
    ll ans=1;
    ll a[n];
    for(ll i=1;i<n;i++)
        cin>>a[i];
    while(ans<=k)
    {
        //cout<<ans<<" "<<a[ans]<<endl;
        if(ans==k)
        {
            cout<<"YES";
            return 0;
        }
        ans+=a[ans];
    }
    cout<<"NO";
    return 0;
}
