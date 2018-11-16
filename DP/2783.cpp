#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int ans = 0;
    for (int num = n; num; num /= 10) {
        ans = max(ans, num % 10);
    }
    cout << ans << '\n';

    while (ans--) {
        int res = 0;
        for (int dec = 1; dec <= n; dec *= 10) {
            if (n / dec % 10) {
                n -= dec;
                res += dec;
            }
        }
        cout << res << ' ';
    }

    return 0;
}
