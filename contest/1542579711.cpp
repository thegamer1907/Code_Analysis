#include <bits/stdc++.h>
using namespace std;

const int maxn = 1010;
int n, k, x, b, nn, cnt[maxn];

int main() {
//    freopen("../Data/Input2.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        b = 0;
        for(int j = 1; j <= k; j++) {
            cin >> x;
            b = (b << 1) + x;
        }
        cnt[b] ++;
    }
    nn = (1 << k);
    for(int i = 0; i < nn; i++) {
        for(int j = 0; j < nn; j++) {
            if((i & j) == 0 && cnt[i] && cnt[j]) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
