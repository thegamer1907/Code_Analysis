#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define oo INT_MAX/2

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll l,r,ats=0;
    cin>>l>>r;

    for(ll i=62; i>=0; i--)
    {
        ll L1 = l|(1ll<<i); //bit set on L
        ll R1 = r|(1ll<<i); //bit set on R
        ll L0 = l&~(1ll<<i); //bit off on L
        ll R0 = r&~(1ll<<i); //bit off on R
        if(L1 >= l && L1 <= r && R0 >=l && R0<=r)ats|=(1LL<<i);
        else if(L0 >= l && L0 <= r && R1 >=l && R1<=r)ats|=(1LL<<i);
    }

    cout<<ats<<"\n";
}
