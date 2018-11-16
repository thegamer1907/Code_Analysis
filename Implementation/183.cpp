#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, n;
    cin >> n >> a >> b;
    int lo = 0;
    while ((1 << lo) != n) {
        lo++;
    }
    a += (1 << (lo)) - 1;
    b += (1 << (lo)) - 1;
    int ans = 0;
    while (a != b) {
        a = a / 2;
        b = b / 2;
        ans++;
    }
    if (lo == ans) {
        cout << "Final!";
    }
    else {
        cout << ans;
    }
    return 0;
}
