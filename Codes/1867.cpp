#include <bits/stdc++.h>

#define f cin
#define g cout
#define ll long long

using namespace std;

ll n,m,k;

ll calc(ll x){
    ll ans = 0;
    for(ll i = 1; i <= n; ++i){
        ans += min(m, (x - 1) / i);
    }
    return ans;
}
ll cautbin(ll lo, ll hi, ll k){
    ll mid = 0;
    while(lo <= hi){
        mid = (lo + hi) / 2;
        ll ok1 = calc(mid);
        ll ok2 = calc(mid + 1);
        if(ok1 < k && ok2 >= k){
            return mid;
        }else
        if(ok1 < k){
            lo = mid + 1;
        }else
        if(ok2 >= k){
            hi = mid - 1;
        }
    }
    return mid;
}
int main()
{
    f >> n >> m >> k;
    g << cautbin(1,250000000001,k) << '\n';
    return 0;
}
