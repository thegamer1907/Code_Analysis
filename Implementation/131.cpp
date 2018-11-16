#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
const int INF = 1e9 + 5;

typedef long long ll;

const ll mod = 1e9 + 7;

bool used[505];
int n, a, b, ans;

void rec(int l, int r, int ct) {
    int rs = 0;
    int us = 0;
    for (int i = 1; i <= n; i++) {
        if (used[i])
            continue;
        rs++;
        if (!us) {
            used[i] = 1;
            us = i;
        } else {
            if (us == a && i == b) {
                ans = ct;
            }
            if (us == a || us == b) {
                used[us] = 0;
                used[i] = 1;
            }
            us = 0;
        }
    }
    if (rs == 1) {
        if (ans == ct - 1) {
            cout << "Final!";
        } else {
            cout << ans;
        }
        exit(0);
    }
    rec(1, n, ct + 1);
}

int main() {
    cin >> n >> a >> b;
    if (a > b)
        swap(a, b);
    rec(1, n, 1);
}
