#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <cctype>
#include <cmath>

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
        if (i > 0) {
            v[i] += v[i-1];
        }
    }
    int m;
    std::cin >> m;
    for (int i = 0; i < m; ++i) {
        int t;
        std::cin >> t;
        std::cout << 1 + std::distance(v.begin(), std::lower_bound(v.begin(), v.end(), t)) << "\n";
    }
}

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}

