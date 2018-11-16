#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    a--;
    b--;
    int cur = 1;
    while (abs(a - b) != 1 || a / 2 != b / 2) {
        cur++;
        a /= 2;
        b /= 2;
        n /= 2;
    }

    if (n == 2) {
        cout << "Final!" << endl;
    } else {
        cout << cur << endl;
    }

    return 0;
}
