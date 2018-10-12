#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cstring>
#include <unordered_map>
#include <sstream>
using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back

typedef long long ll;
typedef pair<int, int> pii;
typedef long double ld;
typedef pair<ll, ll> pll;

const int N = 200005;
int n, q, p;
ll a[N], s[N], d;

int main() {
    ios_base::sync_with_stdio(false);
    cin >> n >> q;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s[i + 1] = s[i] + a[i];
    }
    s[n + 1] = 1e18;
    for (int qq = 0; qq < q; ++qq) {
        ll x;
        cin >> x;
        x += d;
        p = upper_bound(s, s + n + 2, x) - s - 1;
        d += (x - d);
        if (p >= n) {
            d = 0;
            p = 0;
        }
        cout << (n - p) << '\n';
    }
    return 0;
}

set< vector<int> > g;
