#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define ever (;;)
#define all(c) c.begin(),c.end()

signed main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n, a, b;
    cin >> n >> a >> b;
    if (a > b)
        swap(a, b);
    int left = 1, right = n, mid, ans = 0;
    while (true) {
        mid = (left + right) / 2;
        if (b <= mid) {
            right = mid;
        } else if (a <= mid && b > mid) {
            if (ans == 0)
                cout << "Final!";
            else cout << log2(n) - ans;
            return 0;
        } else {
            left = mid;
        }
        ans++;
    }
}
