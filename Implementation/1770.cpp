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
ll sol(string &s,char x)
{
    ll cc=0;
    ll mc=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]==x)
        {
            cc++;
        }
        else
        {
            cc=0;
        }
        mc=max(cc,mc);
    }
    return mc;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    ll x=sol(s,'0');
    ll y=sol(s,'1');
    if(x>=7||y>=7)
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}