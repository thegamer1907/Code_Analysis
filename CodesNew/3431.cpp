#include <iostream>
#include <bits/stdc++.h>
#define ll long long


using namespace std;

int main()
{
    ll n,m;
    cin>>n>>m;
    ll mx=0;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        sum+=a;
        mx=max(mx,a);
    }
    cout<<max(mx,(ll)ceil((sum+m)*1.0/n))<<" "<<mx+m<<endl;
    return 0;
}

