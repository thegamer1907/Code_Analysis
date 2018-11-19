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
	string s;
	cin >> s;
	int n, f1 = 0, f2 = 0;
	cin >> n;
	while (n--) {
        string t;
        cin >> t;
        if (t == s) {
            cout << "YES";
            return 0;
        }
        if (t[0] == s[1]) {
            f1 = 1;
        }
        if (t[1] == s[0]) {
            f2 = 1;
        }
	}
	f1 = f1 && f2;
	cout << (f1 ? "YES" : "NO");
	return 0;
}
