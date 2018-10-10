#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <iomanip>
#include <cmath>
#include <map>
#include <stack>

void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> v(n, std::vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> v[i][j];
        }
    }
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i + 1 < n; ++i) {
            v[i][j] = (v[i][j] > v[i + 1][j]) ? 1 : 0;
        }
    }
    for (int j = 0; j < m; ++j) {
        v[n - 1][j] = n - 1;
        for (int i = n - 2; i >= 0; --i) {
            v[i][j] = v[i][j] == 0 ? v[i + 1][j] : i;
        }
    }
    std::vector<int> d(n - 1);
    for (int i = 0; i + 1 < n; ++i) {
        d[i] = v[i][0];
        for (int j = 1; j < m; ++j) {
            d[i] = std::max(d[i], v[i][j]);
        }
    }
    int k;
    std::cin >> k;
    while (k--) {
        int l, r;
        std::cin >> l >> r;
        if (l == r) {
            std::cout << "Yes";
        } else {
            std::cout << ((d[l - 1] > r - 2) ? "Yes" : "No");
        }
        std::cout << "\n";
    }
}

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}

