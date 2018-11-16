#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    cin >> a >> b;
    if (a > b) {
        swap(a, b);
    }
    if (a <= n / 2 && b > n / 2) {
        cout << "Final!\n";
    } else {
        int cnt = 1;
        for (int i = 2; i < n; i *= 2) {
            int l = 1, r = i;
            while (r <= n) {
                if (a >= l && a <= r && b <= r && b >= l) {
                    cout << cnt << "\n";
                    return 0;
                }
                l += i;
                r += i;
            }
            ++cnt;
        }
    }
}
