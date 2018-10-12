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
    vector<ll> v(n);
    ll sum=0;
    ll mv=-1;
    for(auto &x:v)
    {
        cin>>x;
        sum+=x;
        mv=max(mv,x);
    }
    ll ans=sum/(n-1);
    if((ans*(n-1))!=sum)
    {
        ans++;
    }
    ans=max(ans,mv);
    cout<<ans<<endl;
    return 0;
}
