#include <bits/stdc++.h>

using namespace std;

typedef long double ld;
typedef double db;
typedef long long ll;

#define int long long
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define sz(a) (signed)a.size()

const int INF = 1e18;
const ld EPS = 1e-7;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector <int> a(n);
    for (int& it : a) {
    	cin >> it;
    }
    int min_t = INF, p = -1;
    for (int i = 0; i < n; ++i) {
    	int t = (a[i] - i + n - 1) / n;
    	if (t < min_t) {
    		min_t = t;
    		p = i;
    	}
    }
    cout << p + 1 << "\n";
    return 0;
}