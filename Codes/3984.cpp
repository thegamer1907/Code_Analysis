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
    cin.tie(0);
    
    #ifdef LOCAL
    assert(freopen("input.txt", "r", stdin));
    assert(freopen("output.txt", "w", stdout));
    #endif
    
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mp(n, vector<int> (m));
    for (auto &t : mp) {
        for (auto &u : t) {
            cin >> u;
        }
    }
    vector<vector<int>> ans(n, vector<int> (m));
    
    for (int j = 0; j < m; j++) {
        ans[n - 1][j] = 1;
        
        for (int i = n - 1; i > 0; i--) {
            if (mp[i - 1][j] <= mp[i][j]) {
                ans[i - 1][j] = ans[i][j] + 1;
            } else {
                ans[i - 1][j] = 1;
            }
        }
    }
    
    vector<vector<int>> ans_sorted(n, vector<int> (m));
    for (int i = 0; i < n; i++) {
        ans_sorted[i] = ans[i];
        sort(ans_sorted[i].begin(), ans_sorted[i].end());
    }
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--;
        int len = r - l;
        auto uu = ans_sorted[l].back();
        if (uu >= len) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}
