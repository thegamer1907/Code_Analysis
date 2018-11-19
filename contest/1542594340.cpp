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

int main() {
    char c1, c2;
    scanf(" %c%c", &c1, &c2);
    int n; scanf("%d", &n);
    bool found = false, first = false, second = false;
    for (int i = 0; i < n; ++i) {
        char d1, d2; scanf(" %c%c", &d1, &d2);
        if (c1 == d1 && c2 == d2) found = true;
        if (c1 == d2) first = true;
        if (c2 == d1) second = true;
    }
    puts(found || (first && second) ? "YES" : "NO");
    return 0;
}
