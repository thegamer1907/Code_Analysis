#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll M[1005];

int main()
{
    //ifstream cin("in.in");
    ll n, l;
    cin >> n >> l;
    for(ll i = 0; i < n; i++) {
        cin >> M[i];
    }
    sort(M, M + n);
    double le = 0.0, ri = l;
    for(ll i = 0; i < 1000; i++) {
        double m = (le + ri) / 2;
        bool ok = true;
        if (M[0] > m) ok = false;
        else if (l - M[n - 1] > m) ok = false;
        else {
            for (ll j = 0; j < n - 1; j++) {
                if (M[j + 1] - M[j] > 2 * m) {
                    ok = false;
                    break;
                }
            }
        }
        if (ok) {
            ri = m;
        } else {
            le = m;
        }
    }
    cout << fixed << setprecision(20);
    cout << le;

}
