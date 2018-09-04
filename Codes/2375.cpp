#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

void solve() {
    const int maxn = (int)1e7;

    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) std::cin >> v[i];

    std::vector<int> cnt(maxn + 1, 0);
    for (int i = 0; i < n; ++i) ++cnt[v[i]];

    std::vector<int> p(maxn + 1, 1);
    std::vector<int> pcnt(maxn + 1, 0);
    for (int i = 2; i <= maxn; ++i) {
        if (!p[i]) continue;
        pcnt[i] += cnt[i];
        for (int j = i + i; j <= maxn; j += i) {
            p[j] = 0;
            pcnt[i] += cnt[j];
        }
    }

    std::vector<int64_t> sum(maxn + 1, 0);
    for (int i = 2; i <= maxn; ++i) {
        sum[i] = sum[i - 1];
        if (p[i]) sum[i] += pcnt[i];
    }

    int q;
    std::cin >> q;
    while (q--) {
        int l, r;
        std::cin >> l >> r;
        int64_t s = 0;
        if (l <= maxn) s = sum[std::min(maxn, r)] - sum[l - 1];
        std::cout << s << "\n";
    }
}

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
