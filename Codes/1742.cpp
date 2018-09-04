#include <bits/stdc++.h>
using namespace std;
int n, m;
long long k;

int main() {
    cin >> n >> m >> k;
    long long lo = 1, hi = 1LL * n * m;
    long long res = hi;
    while (lo <= hi) {
        long long mid = (lo + hi) >> 1;
        long long K = 0;
        for (int i = 1; i <= n; i++) K += min((long long)m, mid / i);
        if (K < k) {
            lo = mid + 1;
        } else {
            res = mid;
            hi = mid - 1;
        }
    }
    cout << res << endl;
}
