#include <bits/stdc++.h>

using namespace std;

const int N = 100002;
const int K = 5;

int mas[N][K];

const int MX = (1 << 4) + 1;
int cnt[MX];

int encode(int i, int k) {
    int res = 0;
    for (int j = 0; j < k; j++) {
        if(mas[i][j] == 1) {
            res += (1 << j);
        }
    }
    return res;
}

int k;
int know[K];
bool go(int type, int mxtype, int total) {
    if (type == mxtype) {
        if (total == 0) {
            return false;
        }
        for (int j = 0; j < k; j++) {
            if (know[j] > total / 2) {
                return false;
            }
        }
        return true;
    }
    int mx = min(cnt[type], 5);
    for (int add = 0; add <= mx; add++) {
        for (int j = 0; j < k ;j++) {
            if (type & (1<<j)) {
                know[j] += add;
            }
        }
        if (go(type + 1, mxtype, total + add)) {
            return true;
        }
        for (int j = 0; j < k ;j++) {
            if (type & (1<<j)) {
                know[j] -= add;
            }
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cin >> mas[i][j];
        }
        cnt[encode(i, k)]++;
    }

    cout << (go(0, (1<<k)-1, 0) ? "YES\n" : "NO\n");
    return 0;
}
