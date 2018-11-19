#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(0); cout.tie(0)
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for(int i = (int)a; i <= (int)b; ++i)
#define sz(s) (int)s.size()
#define all(v) v.begin(),v.end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pll;
const ll inf = (ll)1e14;
const ll N = (ll)2e5+77;
const ll mod = (ll)1e9+7;

ll n,k;
ll h,m,s,a,b;
ld ang[3],r[3],x,y,z;

int main() {
    fast;
    cin >> h >> m >> s >> a >> b;

    x = 360 - 30 * a;
    y = 30 * b + x;
    if (y >= 360) y -= 360;

    ang[0] = 6 * s;
    ang[1] = 6 * m + ld(s) / 10;
    ang[2] = 30 * h + ld(m) / 2 + ld(s) / 120;

    forn(i, 3) {
        r[i] = ang[i] + x;
        if (r[i] >= 360) r[i] -= 360;
//        cout << r[i] << endl;
    }

//    cout << x << " " << y << endl;

    z = 0;
    bool ok = true;
    while (z != y) {
        forn(i, 3) {
            if (z < r[i] and z + 30 >= r[i]) ok = false;
        }
        if (!ok) break;
        z += 30;
//        cout << z << endl;
    }

    if (ok and z == y) return cout << "YES\n", 0;

    z = 360;
    ok = true;
    while (z != y) {
        forn(i, 3) {
            if (z > r[i] and z - 30 <= r[i]) ok = false;
        }
        if (!ok) break;
        z -= 30;
//        cout << z << endl;
    }

    if (ok and z == y) return cout << "YES\n", 0;

    cout << "NO\n";
    return 0;
}