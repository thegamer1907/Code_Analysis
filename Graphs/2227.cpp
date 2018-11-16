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
    ll n;
    cin>>n;
    vector<ll > p(n+1,0);
    for(ll i=1;i<=n;i++)
    {
        cin>>p[i];
    }
    vector<set<ll> > v(n+1);
    for(ll i=1;i<=n;i++)
    {
        if(p[i]==-1)
        {
            v[1].insert(i);
        }
    }
    for(ll i=2;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            if(v[i-1].find(p[j])!=v[i-1].end())
            {
                v[i].insert(j);
            }
        }
    }
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
        if(v[i].size())
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}


