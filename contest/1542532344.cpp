#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define x first
#define y second

template <class T> bool chkmin(T &a, T b) { return a > b ? a = b, 1 : 0; }
template <class T> bool chkmax(T &a, T b) { return a < b ? a = b, 1 : 0; }
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;
const double eps = 1e-7;

#define N

int h, m, s, t1, t2;
ld a[5], p, q;

int main() {
    scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
    if (h == 12) h = 0;
    if (t1 == 12) t1 = 0;
    if (t2 == 12) t2 = 0;
    ll tot = h * 3600 + m * 60 + s;
//    cout<<tot<<endl;
    a[0] = 6 * tot, a[1] = 1.0 * tot / 10, a[2] = 1.0 * tot / 120;
    for (int i = 0; i < 3; i ++) {
//        cout<<a[i]<<endl;
        a[i] = a[i] - (floor(a[i] / 360)) * 360.0;
    }
    sort(a, a + 3);
//    for (int i = 0; i < 3; i ++) cout<<a[i]<<endl;
    p = t1 * 30.0; q = t2 * 30.0;
    if (p > q) swap(p, q);
//    cout<<p<<" "<<q<<endl;
    if (lower_bound(a, a + 3, q) == lower_bound(a, a + 3, p) || p < a[0] && q > a[2]) return puts("YES"), 0;
    puts("NO");
    return 0;
}
