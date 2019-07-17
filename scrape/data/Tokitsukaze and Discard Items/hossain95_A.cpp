#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007ll
#define endl "\n"

int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> ar(m);
    for(ll x=0;x<m;x++)
    {
        cin>>ar[x];
    }
    ll count=0;
    ll temp=k;
    for(ll x=0;x<m;)
    {
        ll y=x;
        for(;y<m;)
        {
            if(ar[y]<=temp)
            {
                y++;
            }
            else
            {
                break;
            }
        }
        if(y==x)
        {
            ll terms=(ar[x]-temp)/k;
            if(terms==0)
            {
                temp+=k;
            }
            else
            {
                temp+=(terms)*k;
            }
            if(temp<0)
            {
                temp=n;
            }
        }
        else
        {
            temp+=y-x;
            count++;
            x=y;
        }
    }
    cout<<count<<endl;
    return 0;
}