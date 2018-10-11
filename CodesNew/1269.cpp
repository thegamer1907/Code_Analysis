#include <bits/stdc++.h>

using namespace std;

typedef long double ld;
typedef long long ll;

const long double eps = 1e-10;

ll lgput(ll a, ll b) {
    ll ret = 1;

    while(b) {
        if(b&1) ret *= a;
        b >>= 1;
        a *= a;
    }

    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    long long best = 1;
    long long when = 1e18;

    for(long long i = 0; i < n; ++i) {
        long long gata;
        cin >> gata;

        long long now = 0;
        for(long long step = 30; step >= 0; --step) {
            if((now+(1ll<<step))*n + i < gata) now += (1ll<<step);
        }

        ++now;
        if(i >= gata) {
            now = 0;
        }

        if(now*n + i < when) {
            when = now*n + i;
            best = i;
        }
    }

    cout << best + 1;
}
