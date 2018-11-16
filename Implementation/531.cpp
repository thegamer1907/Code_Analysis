#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n,k;
int main()
{
    cin>>n>>k;

    ll a[n];
    for (ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //cout<<a[2];
    ll b=0;
    for (ll i=0;i<n;i++)
    {
        if (a[i]>=a[k-1] && a[i]>0)b++;
    }
    cout<<b;
}
