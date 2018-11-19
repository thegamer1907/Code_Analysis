#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;

#define mp make_pair
#define pb(x) push_back(x)
#define rep(i, n) for (int i = 0; i < n; i++)
#define repp(i, s, e) for (int i = s; i <= e; i++)
#define all(x) x.begin(), x.end()
#define geti1(x) scanf("%d", &(x))
#define geti2(x, y) scanf("%d%d", &(x), &(y))
#define geti3(x, y, z) scanf("%d%d%d", &(x), &(y), &(z))
#define geti4(x, y, z, w) scanf("%d%d%d%d", &(x), &(y), &(z), &(w))
#define GET_MACRO(_1, _2, _3, _4, NAME, ...) NAME
// clang-format off
#define geti(...) GET_MACRO(__VA_ARGS__, geti4, geti3, geti2, geti1) (__VA_ARGS__)
// clang-format on

#define MAX2(x, y) (((x) > (y)) ? (x) : (y))
#define MIN2(x, y) (((x) < (y)) ? (x) : (y))
#define MAX3(x, y, z) ((x) > (y) ? ((x) > (z) ? (x) : (z)) : ((y) > (z) ? (y) : (z)))
#define MIN3(x, y, z) ((x) < (y) ? ((x) < (z) ? (x) : (z)) : ((y) < (z) ? (y) : (z)))
#define MID3(val1, val2, val3) MAX2(MIN2(MAX2(val1, val2), val3), MIN2(val1, val2))

#define INF 2123456789
#define IINF 9123456789123456789
#define M_PI 3.14159265358979323846
//--------------------------------------------------//
int h, m, s, t1, t2;

double tme[3];
int main() {
    cin >> h >> m >> s >> t1 >> t2;
    tme[2] = 360.0 * s / 60;
    tme[1] = 360.0 * m / 60 + tme[2] / 60;
    tme[0] = 360.0 * h / 12 + tme[1] / 60;
    if (tme[0] >= 360) tme[0] -= 360;
    sort(tme, tme + 3);
    auto it1 = upper_bound(tme, tme + 3, 30.0 * t1);
    auto it2 = upper_bound(tme, tme + 3, 30.0 * t2);
    // cout << tme[0] << " " << tme[1] << " " << tme[2] << endl;
    // cout << it1 - tme << " " << it2 - tme << endl;
    if (it1 == it2 || (it1 - tme == 0 && it2 - tme == 3) || (it1 - tme == 3 && it2 - tme == 0))
        puts("YES");
    else
        puts("NO");
}