#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
     ll n , t;
    cin >> n >> t;
    ll a[n];
    for(ll i = 0 ; i < n ; i++)
        cin >> a[i];
    ll i = 1;
    bool flag = false;
    while(i <= n)
    {
        if(i == t)
        {
            flag = true;
            break;
        }
        if(i > t)
            break;
        i+=a[i-1];
    }
    //if(i == t)
    //cout << i << " " << t;
    cout << ((flag)?"YES":"NO");
    return 0;
}
