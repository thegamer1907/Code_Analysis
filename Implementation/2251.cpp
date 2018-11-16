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
    int k, n, w; cin >> k >> n >> w;
    cout << max(k * w * (w + 1) / 2 - n, 0ll) << endl;
}









