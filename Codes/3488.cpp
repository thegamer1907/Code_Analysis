#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int can(ll n, ll k) 
{
    ll a = 0, b = 0;
    while(n != 0)
    {
        a += min(n, k);
        n -= min(n, k);
        b += n/10;
        n -= n/10;
    }
    return a >= b;
}

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll n;
    while(cin >> n)
    {
        ll lo = 1, hi = n, mid;
        while(lo < hi)
        {
            mid = lo + (hi-lo)/2;
            if(can(n,mid))
                hi = mid;
            else
                lo = mid+1;
        }
        cout << lo << '\n';
    }
    return 0;
}