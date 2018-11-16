/// Code By t_bone_289 (Tushar Singh)
/// An Immature Programmer.... I'm still developing !!
#include<bits/stdc++.h>
using namespace std;
#define pll pair<ll,ll>
#define fi first
#define se second
#define mp make_pair
#define pb emplace_back
#define endl '\n'
#define M 1000000007
typedef long long ll;
typedef double d;
typedef long double ld;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,m;
    cin>>n>>m;
    vector<ll> v(m);
    for(auto &x:v)
    {
        cin>>x;
    }
    ll prev=1;
    ll ans=0;
    for(auto x:v)
    {
        if(x>=prev)
        {
            ans+=x-prev;
        }
        else
        {
            ans+=n-prev+x;
        }
        prev=x;
    }
    cout<<ans<<endl;
    return 0;
}