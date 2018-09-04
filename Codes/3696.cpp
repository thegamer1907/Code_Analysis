#include <bits/stdc++.h>

#define ll  long long

using namespace std;

ll nb, ns, nc, pb, ps, pc, b, s, c, r;

bool can_make(ll hamburger_count) {
    ll price_bread = max(0ll, (hamburger_count*b - nb)) * pb;
    ll price_sausage = max(0ll, (hamburger_count*s - ns)) * ps;
    ll price_cheese = max(0ll, (hamburger_count*c - nc)) * pc;
    //cout << price_cheese << endl;
    return ((price_bread + price_sausage + price_cheese) <= r);
}

int main() {
    string str;
    ll ans = 0;

    cin >> str;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;

    b = count(str.begin(), str.end(), 'B');
    s = count(str.begin(), str.end(), 'S');
    c = str.length() - b - s;

    ll left = 0, right = 1e12+1000;
    //cout << right << endl;
    while (left <= right) {
        ll mid = (left + right) / 2ll;
        //cout << left << " " << right << " ";
        if (can_make(mid)) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << ans;

    return 0;
}
