#include <bits/stdc++.h>

using namespace std;

inline void Boost() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
typedef long long int ll;
typedef long double ld;

ll v[3], have[3], cost[3];

int main() {
	Boost();

    string s;
    cin >> s;


    for(const auto &it: s) {
        switch(it) {
            case 'B': ++v[0]; break;
            case 'S': ++v[1]; break;
            default: ++v[2];
        }
    }
    for(int i = 0; i < 3; ++i) cin >> have[i];
    for(int i = 0; i < 3; ++i) cin >> cost[i];

    ll rubles;
    cin >> rubles;

    ll lo = 0;
    ll hi = 1e13;
    ll ans = 0;
    while(lo <= hi) {
        ll mid = (lo + hi) / 2;

        ll aprox = 0;
        for(int i = 0; i < 3; ++i) {
            aprox += max(0LL, mid * v[i] - have[i]) * cost[i];
        }

        if(aprox <= rubles) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    cout << ans;
	return 0;
}