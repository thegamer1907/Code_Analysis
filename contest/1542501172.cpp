/* code by Pranjal Rai : @Ashta_Swar */
#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pb push_back
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll M=1e9+7;
ll inf=2e18;
string to_string(ll x){stringstream ss; ss<<x; return ss.str();}
ll to_integer(string s){stringstream ss(s); ll x; ss>>x; return x;}

ll vis[20];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n,k;
    cin>>n>>k;
    for(ll i=0;i<n;i++)
    {
        ll y=0;
        for(ll j=0;j<k;j++)
        {
            ll x;
            cin>>x;
            y+=(1<<j)*x;
        }
        vis[y]=1;
    }
    for(ll i=0;i<16;i++)
    {
        for(ll j=0;j<16;j++)
        {
            if(!vis[i] || !vis[j])
                continue;
            if((i&j)==0)
            {
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"NO\n";
    return 0;
}
