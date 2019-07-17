#include <bits/stdc++.h>
#define bend(_x) _x.begin(), _x.end()
#define msort(_x) sort(bend(_x));
#define mrsort(_x) sort(bend(_x), [](long long p, long long t){ return p > t; });
typedef long long ll;
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    ll n, m, k, i;
    cin >> n >> m >> k;

    vector<ll> items(m);
    for(i = 0; i < m; i++) cin >> items[i];

    ll ans = 1, dif = 0, dk = k, adif = 0;
    for(i = 0; i < m; i++) {
        if(items[i] - adif <= dk) {
            dif++;
        }
        else {
            items[i] -= dif;
            adif = dif;
            if(items[i] < dk) {
                dif++;
                ans++;
            }
            else {
                dk = (items[i] / k) * k;
                if(items[i] > dk) dk += k;

                if(dif != 0) ans++;
                dif++;
            }
        }
    }

    cout << ans;

    return 0;	
}