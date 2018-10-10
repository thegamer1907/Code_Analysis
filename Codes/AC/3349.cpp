#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll ara[100009], zero[100009];

int main()

{
    ll n;
    scanf("%lld", &n);
    for(ll i = 1; i <= n; i++) {
        scanf("%lld", &ara[i]);
        zero[i] = ara[i] + 1;
    }

    ll ans = 1e18, anst = 1e18;

    for(ll i = 1; i <= n; i++) {
        ll mod = i % n;
        ll vag = zero[i] / n;
        ll t = vag * n + mod;
        if(t < zero[i])
            t = (vag + 1) * n + mod;

        //cout << zero[i] << "  " << t << endl;
        if(anst > t) {
            anst = t;
            ans = i;
        }

    }

    cout << ans << endl;

    return 0;
}
