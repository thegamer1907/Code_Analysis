#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n,s[500001];

int main()
{
    /*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    cin>>n;
    for (ll i=1; i<=n; ++i)
        cin>>s[i];
    sort(s+1, s+n+1);
    ll ans=0;
    ll l, r=n/2+1;
    for (l=1; l<=n/2; ++l)
    {
        while(r<=n && s[l]*2>s[r])
        r++;
        if (r<=n && s[l]*2<=s[r])
        {
            ans++;
            r++;
        }
    }
    cout<<n-ans;

    return 0;
}