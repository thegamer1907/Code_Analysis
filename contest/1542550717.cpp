#ifdef LOCAL
#include "/home/dima/C++/debug.h"
#else
void nop();
#define dbg(...) nop
#define dbgl(...) nop
#endif
#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
typedef long long ll;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<bool> VB;
typedef vector<string> VS;
typedef vector<PII> VPII;
typedef vector<PLL> VPLL;
typedef vector<VI> VVI;
typedef set<int> SI;
typedef set<ll> SL;
typedef set<string> SS;
typedef set<PII> SPII;
typedef set<PLL> SPLL;
typedef multiset<int> MSI;
typedef multiset<ll> MSL;
typedef multiset<string> MSS;
typedef map<int, int> MII;
typedef map<ll, ll> MLL;
const int inf = (int) 1e9;
const ll infl = (ll) 2e18;
const int mod = 1000000007;

int main() {
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    int h0, m0, s0, t1, t2;
    cin >> h0 >> m0 >> s0 >> t1 >> t2;

    int day = 12 * 60 * 60;
    int s = s0 * 60 * 12;
    int m = (m0 * 60 + s0) * 12;
    int h = h0 * 3600 + m0 * 60 + s0;
    t1 *= 3600;
    t2 *= 3600;
    VI ts;
    for (int i = 0; i <= 2; ++i) {
        int d = i * day;
        ts.push_back(h + d);
        ts.push_back(s + d);
        ts.push_back(m + d);
    }
    sort(ts.begin(), ts.end());
    if (t1 > t2) {
        swap(t1, t2);
    }
    dbg(ts);

    auto check = [&](int t1, int t2) {
        dbg(t1, t2);
        return upper_bound(ts.begin(), ts.end(), t1) == upper_bound(ts.begin(), ts.end(), t2);
    };
    bool can = check(t1, t2) || check(t2, t1 + day);
    cout << (can ? "YES" : "NO") << endl;
    return 0;
}