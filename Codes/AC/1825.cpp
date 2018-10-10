#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    long long n, m, k; cin >> n >> m >> k;
    long long l = 1, r = n * m;
    while (l < r) {
        long long mid = (l + r + 1) / 2, count = 0;
        for (int i = 1; i <= n; i++) count += min((mid - 1) / i, m);
        if (count < k) l = mid;
        else r = mid - 1;
    }
    cout << l << endl;
    return 0;
}
