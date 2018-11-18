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
    string s;
    cin >> s;
    int n;
    cin >> n;
    VS ss(n);
    for (int i = 0; i < n; ++i) {
        cin >> ss[i];
    }

    bool can = false;
    for (int i = 0; i < n; ++i) {
        can |= s == ss[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            can |= s == (string(1, ss[i][1]) + string(1, ss[j][0]));
        }
    }
    cout << (can ? "YES" : "NO") << endl;
    return 0;
}