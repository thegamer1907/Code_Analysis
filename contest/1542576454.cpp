#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 10;
int n, k;
vector<int> know[maxn];
bool choose[maxn];

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        bool flag = true;
        for (int j = 1; j <= k; j++) {
            int tmp;
            cin >> tmp;
            know[i].push_back(tmp);
            flag &= ~tmp;
        }
        if (flag) {
            cout << "YES" << endl;
            return 0;
        }
    }
    sort(know + 1, know + n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < (1 << k); j++) {
            int mask = j;
            vector<int> choose(k);
            for (int x = 0; x < k; x++) {
                choose[x] = mask % 2;
                mask /= 2;
            }
            bool flag = true;
            for (int x = 0; x < k; x++) {
                flag &= (know[i][x] + choose[x] <= 1);
            }
            if (!flag) continue;
            int pos = lower_bound(know + 1, know + n + 1, choose) - know;
            for (int x = max(1, pos - 5); x <= min(n, pos + 5); x++) {
                if (know[x] == choose && x != i) {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}