#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ss second
#define ff first

int main()
{
    ios::sync_with_stdio(0); cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    for(ll i=1;i<=n;i++)
    {
        ll x=((i)*(i+1))/2;
        if((5*x+k)>240)
        {
            cout<<i-1;
            return 0;
        }
    }
    cout<<n;
	return 0;
}