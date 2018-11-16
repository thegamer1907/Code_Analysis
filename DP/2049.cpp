#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
ll inf=1e14;
ll mod=1e9+7;
char en='\n';
#define N 100005
ll arr[N];
ll val[N];
// Driver program to test above
int main()
{

    ll n,m;
    cin>>n>>m;

    for(ll i=1;i<=n;i++)
        cin>>arr[i];

    map<ll,ll> par;
    for(ll i=n;i>=1;i--)
    {
        par[arr[i]];
        val[i]=par.size();
    }


    for(ll i=1;i<=m;i++)
    {
        ll x;
        cin>>x;
        cout<<val[x]<<en;
    }

    return 0;
}
