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
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n+1,0);
    for(ll i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    for(ll i=1;i<=n;i++)
    {
        v[i]+=v[i-1];
    }
    ll i=1;
    ll j=i+k-1;
    ll mv=INT_MAX;
    ll in=0;
    while(j<=n)
    {
        if((mv)>((v[j]-v[i-1])))
        {
            mv=v[j]-v[i-1];
            in=i;
        }
        i++;
        j++;
    }
    cout<<in<<endl;
    return 0;
}


