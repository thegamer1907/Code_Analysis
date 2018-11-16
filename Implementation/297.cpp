#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <cassert>

using namespace std;

int32_t main() {
    //assert(freopen("input.txt", "r", stdin));
    //assert(freopen("output.txt", "w", stdout));

    ios_base::sync_with_stdio(false);

    int n, a, b; cin >> n >> a >> b;
    a--, b--;

    int k = 0;
    while ((1 << k) != n)
        k++;

    for (int r = k; r > 0; r--) {
        n /= 2;
        if (a / n != b / n) {
            if (r == k)
                cout << "Final!" << endl;
            else
                cout << r << endl;
            return 0;
        }
    }

    return 0;
}
