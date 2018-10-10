#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,i,j;
    cin>>n;
    vector<ll> a(n+1),b(n+1);
    for(i=1;i<=n;i++)
        cin>>a[i];
    b=a;
    for(i=1;i<=n;i++)
        b[i]+=b[i-1];
    ll m;
    cin>>m;
    while(m--)
    {
        ll q;
        cin>>q;
        ll lo=1,hi=n,mid;
        while(hi-lo>1)
        {
            mid=(lo+hi)/2;
            if(b[mid]>=q)
                hi=mid;
            else
                lo=mid;
        }
        if(b[lo]>=q)
            cout<<lo<<endl;
        else
            cout<<hi<<endl;
    }
}
