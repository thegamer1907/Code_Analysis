#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    string s;
    cin >> s;
    ll a1, b1, c1;
    ll a, b, c, r;
    ll a2 = 0, b2 = 0, c2 = 0;
    cin >> a1 >> b1 >> c1;
    for (ll i = 0; i < s.size(); i++) {
        if (s[i] == 'B') {
            a2++;
        }
        else if (s[i] == 'S') {
            b2++;
        }
        else {
            c2++;
        }
    }
    cin >> a >> b >> c >> r;
    ll ans = 0, wtf = 1000;
    while ((a1 > 0 || b1 > 0 || c1 > 0) && wtf > 0) {
        if (a1 < a2) {
            r -= max(ll(0), (a2 - a1)) * a;
            a1 = 0;
        }
        else {
            a1 -= a2;
        }

        if (b1 < b2) {
            r -= max(ll(0), (b2 - b1)) * b;
            b1 = 0;
        }
        else {
            b1 -= b2;
        }

        if (c1 < c2) {
            r -= max(ll(0), (c2 - c1)) * c;
            c1 = 0;
        }
        else {
            c1 -= c2;
        }
        if (r >= 0) {
            ans++;
        }
        wtf--;
    }
//    cout << ans  << ' ' << r << endl;
    if (r > 0) {
        ans += r / (a2 * a + b2 * b + c2 * c);
    }

    cout << ans;

}
