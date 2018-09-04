#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
#include <map>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(11000000, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v[x]++;
    }
    vector<int> f(11000000);
    vector<bool> used(11000000);
    for (int i = 2; i <= 10000000; i++) {
        if (used[i]) {
            continue;
        }
        int cur = i;
        while (cur <= 10000000) {
            used[cur] = 1;
            f[i] += v[cur];
            cur += i;
        }
    }
    int m;
    cin >> m;
    for (int i = 1; i <= 10000000; i++) {
        f[i] += f[i - 1];
    }
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        l = min(10000000, l);
        r = min(10000000, r);
        cout << f[r] - f[l - 1] << endl;
    }
}
