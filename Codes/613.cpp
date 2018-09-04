#include <bits/stdc++.h>

using namespace std;

typedef double ld;
typedef long long ll;

bool ok(int n) {
    int cur = 0;
    while (n) {
        cur += n % 10;
        n /= 10;
    }
    return cur == 10;
}

void solve() {
    int n;
    cin >> n;
    for (int i = 1; true; ++i) {
        if (ok(i)) {
            --n;
            if (n == 0) {
                cout << i << endl;
                return;
            }
        }
    }
}

void solveTask() {
    int test = 1;
    for (int tst = 1; tst <= test; ++tst) {
        solve();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    //freopen("input.txt", "r", stdin);
    //freopen("grant.in", "r", stdin);
    //freopen("grant.out", "w", stdout);
    solveTask();
    return 0;
}
