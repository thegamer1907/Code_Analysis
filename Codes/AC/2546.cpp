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

const int Z = (int)1e7 + 111;
const int inf = (int)1e9 + 111;
const ll llinf = (ll)1e18 + 5;
const int MOD = (int)1e9 + 7;

int cnt[Z], cntP[Z];
bool prime[Z];

int main() {
	//files;
	SWS;
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        ++cnt[x];
    }
    fill(prime, prime + Z, 1);
    for (int i = 2; i * i < Z; ++i) {
        if (prime[i]) {
            for (int j = i*i; j < Z; j += i) {
                prime[j] = 0;
            }
        }
    }
    for (int i = 2; i < Z; ++i) {
        if (prime[i]) {
            for (int j = i; j < Z; j += i) {
                cntP[i] += cnt[j];
            }
        }
    }
    for (int i = 2; i < Z; ++i) {
        cntP[i] += cntP[i-1];
    }
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        if (l > (int)1e7) {
            cout << "0\n";
            continue;
        }
        r = min(Z-1, r);
        cout << cntP[r] - cntP[l-1] << '\n';
    }
	return 0;
}