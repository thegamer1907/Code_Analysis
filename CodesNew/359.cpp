#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,i,sum=0,ans=0,f=0,d,t;
    cin>>n>>t;
    ll a[n];
    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=0; i<n; i++)
    {
        sum+=a[i];
        if(sum==t)
        {
            d=i-f+1;
            if(d>ans)
                ans=d;
            sum=sum-a[f];
            f++;
        }
        if(sum>t)
        {
            d=i-f;
            if(d>ans)
                ans=d;
            sum=sum-a[f];
            f++;
        }
        if(i==n-1)
        {
            d=i-f+1;
            if(d>ans)
                ans=d;
        }
    }
    cout<<ans;
    return 0;
}