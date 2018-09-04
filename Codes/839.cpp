#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll n, k;
void caut(ll x, ll vl)
{
    if(k == x / 2 + 1)
    {
        cout << vl;
        exit(0);
    }
    else if(k >= x / 2 + 1) k -= (x/2 + 1);
    caut(x / 2 - 1, vl - 1);
}
int main()
{
    cin >> n >> k;
    ll v = pow(2, n) - 1;
    caut(v, n);
    return 0;
}
