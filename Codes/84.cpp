#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,x=0,sum=0,s=0,ans=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {cin>>a[i];sum+=a[i];}
    if(sum%3!=0)
    {
        cout<<"0";
        return 0;
    }
    else
    {

        for(ll i=0;i<n-1;i++)
        {
            s+=a[i];
            if(s==sum*2/3)
                ans+=x;
            if(s==sum/3)
                x++;

        }
        cout<<ans;
    }

    return 0;
}
