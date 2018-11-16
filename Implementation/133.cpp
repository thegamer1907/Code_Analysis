#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)x.size()

typedef long long ll;
typedef long double ld;

const int Z = (int)1e5 + 111;
const int inf = (int)1e9 + 111;
const ll llinf = (ll)1e18 + 111;

int main () {
    ios_base::sync_with_stdio(false);

    int n, x, y;
    cin >> n >> x >> y;
    vector <int> a(n);
    for (int i = 0; i < n; ++i) {
        a[i] = i + 1;
    }
    int step = 1;
    int k = 2;
    while (k < n) {
        step++;
        k *= 2;
    }
    for (int j = 1; j <= step; ++j) {
        vector <int> b;
        for (int i = 0; i < sz(a) - 1; i += 2) {
            if ((a[i] == x && a[i+1] == y) || (a[i] == y && a[i+1] == x)) {
                if (step == j) {
                    cout << "Final!";
                } else {
                    cout << j;
                }
                return 0;
            }
            if (a[i] == x || a[i] == y) {
                b.pb(a[i]);
            } else if (a[i+1] == x || a[i+1] == y) {
                b.pb(a[i+1]);
            } else {
                b.pb(a[i]);
            }
        }
        a = b;
    }
    return 0;
}
