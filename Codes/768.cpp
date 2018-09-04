#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int sum(int x) {
    int res = 0;
    while (x) {
        res += x % 10;
        x /= 10;
    }
    return res;
}

int main() {
#ifdef MY
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int k = 0;
    int now = 0;
    while (true) {
        if (sum(now) == 10) {
            ++k;
        }
        if (k == n) {
            cout << now;
            return 0;
        }
        ++now;
    }
}