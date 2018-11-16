#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <set>
#include <map>
#include <iomanip>

#define ios ios::sync_with_stdio(false);cin.tie(0);
#define double long double
#define int long long
#define inf (int)1e18
#define endl '\n'

using namespace std;

signed main() { ios
    int n; cin >> n;
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; ++i) {
        int dx, dy, dz; cin >> dx >> dy >> dz;
        x += dx; y += dy; z += dz;
    }
    cout << (!x && !y && !z ? "YES" : "NO") << endl;
}









