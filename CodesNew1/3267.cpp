#include <bits/stdc++.h>
using namespace std;
typedef long long cc;
cc sum = 0;
int n, mx = 0;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        mx = max(mx, x);
        sum += x;
    }
    int res = sum / (n - 1) + (sum % (n - 1) != 0);
    res = max(res, mx);
    cout << res;
    return 0;
}
