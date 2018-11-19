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
#include <ctime>

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

int main() {
	srand(time(0));
	//files;
	SWS;
	ld h, t1, t2, m, s;
	int cnt = 0;
	cin >> h >> m >> s >> t1 >> t2;
	h += m / 60 + s / 3600;
	m += s / 60;
	if (h >= 12) {
        h = 0;
	}
	if (m >= 60) {
        m = 0;
	}
	if (s >= 60) {
        s = 0;
	}
	m /= 5;
	s /= 5;
	if (t1 > t2) {
        swap(t1, t2);
	}
	if (h > t1 && h < t2) cnt++;
	if (m > t1 && m < t2) cnt++;
	if (s > t1 && s < t2) cnt++;
	if (cnt == 0 || cnt == 3) {
        cout << "YES";
	} else {
        cout << "NO";
	}
 	return 0;
}