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

const int Z = (int)2e5 + 111;
const int inf = (int)1e9 + 111;
const ll llinf = (ll)1e18 + 5;
const int MOD = (int)1e9 + 7;

int a[Z];

int main() {
	//files;
	SWS;
	map <int, int> l, r;
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        r[a[i]]++;
	}
	ll ans = 0;
	for (int i = 1; i <= n; ++i) {
        r[a[i]]--;
        if (a[i]%k || abs(1LL * a[i] * k) > (ll)inf) {
            l[a[i]]++;
            continue;
        }
        ans += 1LL * l[a[i]/k] * r[a[i]*k];
        l[a[i]]++;
	}
	cout << ans;
	return 0;
}