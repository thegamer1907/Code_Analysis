#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

int a[1005];
int main() {
    int n, k, x;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int t = 0;
        for (int j = 0; j < k; j++) {
            cin >> x;
            t = t << 1 | x;
        }
        a[t]++;
    }
    for (int i = 0; i < (1<<k); i++) {
        for (int j = 0; j < (1<<k); j++) {
            if (a[i] > 0 && a[j] > 0 && !(i&j)) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
