#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <cstring>
#include <cctype>
#include <queue>
#include <deque>

using namespace std;

#define fi first
#define se second
#define pf push_front
#define pb push_back
#define mk make_pair
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)x.size()
#define SWS ios_base::sync_with_stdio(false)
#define rfile freopen("input.txt", "r", stdin)
#define wfile freopen("output.txt", "w", stdout)
#define files rfile; wfile

typedef long long ll;
typedef long double ld;

const int Z = (int)1e5 + 111;
const int inf = (int)1e9 + 111;
const ll llinf = (ll)1e18 + 5;
const int MOD = (int)1e9 + 7;

ll a, b, c, x, y, z, r, need[3];

int get_num(char x) {
    if (x == 'B') return 0;
    if (x == 'S') return 1;
    return 2;
}

bool can (ll cur) {
    ll sum = max(0LL, (cur*need[0] - a) * x);
    sum += max(0LL, (cur*need[1] - b) * y);
    sum += max(0LL, (cur*need[2] - c) * z);
    return sum <= r;
}

int main() {
	//files;
	SWS;
	string s;
	cin >> s;
	for (int i = 0; i < sz(s); ++i) {
        need[get_num(s[i])]++;
	}
	cin >> a >> b >> c >> x >> y >> z >> r;
	ll l = 0, r = 1e13;
	while (l < r - 1) {
        ll m = (r + l) / 2;
        if (can(m)) {
            l = m;
        } else {
            r = m;
        }
	}
	cout << l;
	return 0;
}