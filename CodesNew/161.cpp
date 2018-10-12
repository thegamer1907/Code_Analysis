#include <bits/stdc++.h>
#define endl '\n'
#define MOD 1000003
#define ll long long
using namespace std;

ll pow_(ll x, unsigned ll y)
{
    if (y == 0)
        return 1;
    else if (y%2 == 0)
        return pow_(x, y/2)*pow_(x, y/2);
    else
        return x*pow_(x, y/2)*pow_(x, y/2);
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    ll n,k;
    cin>>n>>k;
    ll i = 1;
    for(i; i<=n; i++)
    {
        if(k% pow_(2,i-1) != 0)
            break;

    }
    cout<<--i;

    return 0;
}
