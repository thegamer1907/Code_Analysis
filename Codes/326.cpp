#include <bits/stdc++.h>
using namespace std;

int n, m;
int gp[1005000] = {};

int main() {
    cin >> n;
    for(int i = 1, j = 1; i <= n; ++i) {
        int t; cin >> t;
        for(int k = 1; k <= t; ++k, ++j) {
            gp[j] = i;
        }
    }
    cin >> m;
    for(int i = 0; i < m; ++i) {
        int t; cin >> t;
        cout << gp[t] << endl;
    }
}