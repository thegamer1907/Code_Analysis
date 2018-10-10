#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

void solve() {
    std::vector<int64_t> r(3);
    std::string s;
    std::cin >> s;
    for (char c: s) {
        if (c == 'B') {
            ++r[0];
        }
        if (c == 'S') {
            ++r[1];
        }
        if (c == 'C') {
            ++r[2];
        }
    }
    std::vector<int64_t> n(3);
    std::cin >> n[0] >> n[1] >> n[2];
    std::vector<int64_t> p(3);
    std::cin >> p[0] >> p[1] >> p[2];
    int64_t mon;
    std::cin >> mon;

    int64_t lt = 0, rt = (int64_t)1e13;
    while (lt + 1 < rt) {
        int64_t mt = (lt + rt) / 2LL;
        int64_t sum = 0;
        for (int i = 0; i < 3; ++i) {
            int64_t req = mt * r[i] - n[i];
            if (req > 0) {
                sum += p[i] * req;
            }
        }
        if (sum <= mon) {
            lt = mt;
        } else {
            rt = mt;
        }
    }
    std::cout << lt;
}

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
