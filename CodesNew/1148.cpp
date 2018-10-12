#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

#define fi first
#define se second

ll n;

bool f(ll x){
    ll r = n;
    ll a = 0, b = 0;
    while (r > 0){
        a += min(r, x);
        r -= x;
        if (r >= 10)
            b += r / 10, r -= r / 10;
    }
    return a >= b;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> n;
    ll l = 0, r = n;
    while (l + 1 < r){
        ll m = (l + r) / 2;
        if (f(m))
            r = m;
        else
            l = m;
    }
    cout << r;
    return 0;
}
