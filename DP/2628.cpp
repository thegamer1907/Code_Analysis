#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x, y;

    cin >> x >> y;
    int t = 0;
    while (x > 0 && y > 0) {
        if (x < y) {
            x += 3;
        } else {
            y += 3;
        }
        ----x;
        ----y;
        if (x >= 0 && y >= 0) {
            ++t;
        } else {
            break;
        }
    }
    cout << t;

    return 0;
}
