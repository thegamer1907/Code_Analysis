#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
#define pb push_back
#define mp make_pair
#define f first
#define s second

ll modexpo(ll a , ll b)
{
    ll res = 1;
    while(b > 0)
    {
        if(b&1)
            res = (res*a)%mod;
        a=(a*a)%mod;
        b >>=1;
    }
    return res;
}

ll gcd(ll a , ll b)
{
    if (a == 0)
        return b;
    return gcd(b%a , a);
}
int main()
{
    int n,k;
    cin >> n >> k;
    vector<ll> arr;
    for(int i = 0 ; i < n ; i++)
    {
        arr.pb(5*(i + 1));
        if (i != 0)
            arr[i] += arr[i - 1];
    }
    auto it = lower_bound(arr.begin() , arr.end() , 240 - k) - arr.begin();
    if (arr[it] == 240 - k)
        cout << it + 1 << endl;
    else
        cout << it << endl;
    return 0;
}