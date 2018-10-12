#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int limiter=n/2;
    ll ans=n;
    for(int i=0;i<n/2;i++)
    {
        for(;;)
        {
            if(a[i]*2<=a[limiter])
            {
                limiter++;
                ans--;
                break;
            }
            else
            limiter++;
            if(limiter==n)
            break;
        }
        if(limiter==n)
        break;
    }
    cout<<ans;
}