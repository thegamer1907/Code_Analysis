#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll ans=1,l=1;
    for(ll i=1;i<n;i++)
    {
        if(a[i]<=a[i-1])
        {ans=max(ans,l);l=1;}
        else
            l++;
    }
    ans=max(ans,l);
    cout<<ans;
    return 0;
}
