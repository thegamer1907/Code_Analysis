#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#define DEBUG 0

using namespace std;

int n, m, res;
vector<int> a, b;

int main() {
    if (DEBUG) {
        freopen("project1.inp", "r", stdin);
        freopen("project1.out", "w", stdout);
    }
    ios_base::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i<n; ++i) {
        int x;
        cin >> x; a.push_back(x);
    }
    cin >> m;
    for (int i = 0; i<m; ++i) {
        int x;
        cin >> x; b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i<n; ++i)
        for (int j = 0; j<m; ++j)
            if (abs(a[i] - b[j]) <= 1)
            {
                b[j] = 1000;
                ++res;
                break;
            }
    cout << res;
    return 0;
}
