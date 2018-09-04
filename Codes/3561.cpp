#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>
#include <type_traits>
#include <array>
#include <string>
#include <map>
#include <cmath>

using namespace std;
using ll = long long;

bool get_ans(ll n, ll k)
{
    ll need = n / 2 + n % 2;
    ll cnt = 0;
    while (n > 0)
    {
        ll sub = std::min(n, k);
        cnt += sub;
        n -= sub;
        n -= n / 10;
        if (cnt >= need) return true;
    }
    return false;
}

void solve()
{
    ll n;
    cin >> n;
    
    ll l = 1;
    ll r = n;
    
    while (r - l > 1)
    {
        ll m = (l + r) / 2;
        if (get_ans(n, m))
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    
    if (get_ans(n, l))
    {
        cout << l;
    }
    else
    {
        cout << r;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    solve();
}
