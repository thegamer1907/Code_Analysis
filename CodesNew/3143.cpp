#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0, r = n, pos = 0;
    while (l < r) {
        int m = (l + r + 1) / 2;
        int cnt = 0, cur_pos = -1;
        for (int i = 0; i < m; i++) {
            if (a[i] == 0) {
                cnt++;
            }
        }
        if (cnt <= k) {
            cur_pos = 0;
        }
        for (int i = m; i < n; i++) {
            if (a[i - m] == 0) {
                cnt--;
            }
            if (a[i] == 0) {
                cnt++;
            }
            if (cnt <= k) {
                cur_pos = i - m + 1;
            }
        }
        if (cur_pos != -1) {
            l = m;
            pos = cur_pos;
        } else {
            r = m - 1;
        }
    }
    cout << l << endl;
    for (int i = 0; i < n; i++) {
        if (i >= pos && i < pos + l) {
            cout << 1 << ' ';
        } else {
            cout << a[i] << ' ';
        }
    }
    cout << endl;
}
