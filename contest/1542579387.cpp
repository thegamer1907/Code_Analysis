#include <algorithm>
#include <cassert>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <queue>
#include <map>
#include <set>
#include <vector>
#include <complex>
using namespace std;
#define mp make_pair
#define pb push_back
#define fst first
#define snd second
#define sz(a) int((a).size())
#define REP(i, n) for (int i = 0; i < n; ++i)
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef long double ld;
const int INF = 2000 * 1000 * 1000;
const ll LLINF = 1ll << 53;
template<class T> void relaxmax(T& r, T v) { r = max(r, v); }
template<class T> void relaxmin(T& r, T v) { r = min(r, v); }

// x1 == x2 ?
bool between(double y, int x1, int x2) {
    if (x2 >= x1)
        return x1 <= y && y <= x2;
    return y >= x1 || y <= x2;
}

bool separate(double d1, double d2, int x1, int x2) {
    return (between(d1, x1, x2) && between(d2, x2, x1)) ||
           (between(d2, x1, x2) && between(d1, x2, x1));
}
    
int main() {
    int h, m, s, t1, t2;
    scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
    h *= 5; h %= 60;
    double hp = h + m / 60. + s / 3600.;
    double mp = m + s / 60.;
    t1 *= 5; t1 %= 60;
    t2 *= 5; t2 %= 60;
    bool ans =
        separate(hp, mp, t1, t2) ||
        separate(hp, s, t1, t2) ||
        separate(mp, s, t1, t2);
    puts(ans ? "NO" : "YES");
    return 0;
}
