#include <iostream>
#include <ctime>
#include <iomanip>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <cassert>
#include <queue>
#include <deque>
#include <climits>
#include <cstring>
#include <random>
#include <bitset>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    #ifdef LOCAL
    assert(freopen("input.txt", "r", stdin));
    assert(freopen("output.txt", "w", stdout));
    #endif
    
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 1; i < n; i++) {
        cin >> p[i];
        p[i]--;
    }
    int ans = 0;
    vector<int> c(n);
    for (auto &t : c) {
        cin >> t;
    }
    for (int i = 0; i < n; i++) {
        if (c[i] != c[p[i]]) {
            ans++;
        }
    }
    cout << ans + 1 << '\n';
}
