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
int n;
string mu;
string ka[110];
int main() {
    cin >> mu;
    geti(n);
    rep(i, n) cin >> ka[i];
    bool ch = false;
    bool ch1 = false, ch2 = false;
    rep(i, n) {
        if (ka[i] == mu) ch = true;
        if (ka[i][0] == mu[1]) ch1 = true;
        if (ka[i][1] == mu[0]) ch2 = true;
    }
    puts((ch || (ch1 && ch2)) ? "YES" : "NO");
}