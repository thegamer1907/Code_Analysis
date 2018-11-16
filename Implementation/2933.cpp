#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include <queue>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using uint = unsigned int;
using ldb = long double;

#define pb emplace_back
#define forn(i, x, n) for(auto i = (int)x; i < (int)n; ++i)

#define int long long

struct init {
    init() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        cout << fixed << setprecision(10);
    }

    ~init() {
        cerr << "Time elapsed: " << (double)clock() / CLOCKS_PER_SEC << "s.\n";
    }
} init;

const int N = 100500 * 2, MOD = 1000 * 1000 * 1000 + 7;
const ldb EPS = 5e-12, HALF = 0.5;

int cnt[26];

int gcd(int x, int y) {
    if (x % y)
        return gcd(y, x % y);
    return y;
}

signed main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int t = min(a, min(c, d));
    cout << t * 256 + max(0ll, min(b, (a - t)) * 32);
}

/* 2
1999999973 1999999943
1999999927 1999999973
  */