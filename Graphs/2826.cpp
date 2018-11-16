#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
        --v[i];
    }
    const int max = (int)1e5;
    std::vector<std::set<int>> c(max);
    std::vector<char> b(max, false);
    for (int i = 0; i < n; ++i) {
        b[v[i]] = true;
    }
    while (m--) {
        int i, j;
        std::cin >> i >> j;
        --i, --j;
        if (v[i] == v[j]) continue;
        c[v[i]].insert(v[j]);
        c[v[j]].insert(v[i]);
    }
    int min = -1;
    for (int i = 0; i < max; ++i) {
        if (!b[i]) continue;
        if (min == -1 || c[i].size() > c[min].size()) min = i;
    }
    std::cout << min + 1;
}

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
