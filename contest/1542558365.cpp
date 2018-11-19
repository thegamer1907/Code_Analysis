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
	int n, k;
	cin >> n >> k;
	set <int> mask;
	for (int i = 1; i <= n; ++i) {
        int curMask = 0;
        for (int j = 0; j < k; ++j) {
            int x;
            cin >> x;
            curMask |= (x << j);
        }
        mask.insert(curMask);
	}
	for (int m1 : mask) {
        bool ok = 1;
        for (int m2 : mask) {
            for (int i = 0; i < k; ++i) {
                if (m1>>i&1 && m2>>i&1) {
                    ok = 0;
                }
            }
            if (ok) {
                cout << "yEs";
                return 0;
            }
        }

	}
	cout << "nO";
	return 0;
}