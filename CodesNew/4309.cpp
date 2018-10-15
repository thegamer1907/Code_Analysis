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

int lcp(const string &a, const string &b) {
    int ans = 0;
    for (int i = 0; i < min((int)a.size(), (int)b.size()); i++) {
        if (a[i] != b[i]) {
            break;
        }
        ans++;
    }
    return ans;
}

void trim(string &s, int len) {
    s = s.substr(0, len);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    #ifdef LOCAL
    assert(freopen("input.txt", "r", stdin));
    assert(freopen("output.txt", "w", stdout));
    #endif
    
    int n;
    cin >> n;
    vector<string> tmp(n);
    for (auto &t : tmp) {
        cin >> t;
    }
    
    for (int i = n - 1; i > 0; i--) {
        if (tmp[i - 1] <= tmp[i]) {
            continue;
        } else {
            auto uu = lcp(tmp[i - 1], tmp[i]);
            trim(tmp[i - 1], uu);
        }
    }
    for (auto &t : tmp) {
        cout << t << '\n';
    }
}
