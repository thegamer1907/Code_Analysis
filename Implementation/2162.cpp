/*
digu_J
Digvijay Janartha
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][3];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> a[i][j];
        }
    }
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; ++i) {
        x += a[i][0];
    }
    for (int i = 0; i < n; ++i) {
        y += a[i][1];
    }
    for (int i = 0; i < n; ++i) {
        z += a[i][2];
    }
    if (x == 0 && y == 0 && z == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
