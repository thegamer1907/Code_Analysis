#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long res = 0;
    long long cur = 0;
    for (long long i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        cur -= a;
        cur += b;
        res = max(res, cur);
    }
    cout << res << endl;
}
