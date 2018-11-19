#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <queue>
#include <cmath>
#include <fstream>
#include <stdlib.h>
#include <ctime>

using namespace std;
#define llg long long
const int MAXN = 1e5 + 2;
const int inf = 1e9 + 7;
const string ABC = "0123456789";


main() {
    int h, m, c, h1, h2;
    cin >> h >> m >> c >> h1 >> h2;
    h = h % 12;
    h1 = h1 % 12;
    h2 = h2 % 12;
    h *= 5;
    h1 *= 5;
    h2 *= 5;
    bool used[MAXN];
    for (int i = 0; i < 60; i++) used[i] = false;
    used[h] = true;
    used[m] = true;
    used[c] = true;
    if (h2 < h1) swap(h1, h2);
    bool f1 = true;
    bool f2 = true;
    for (int pos = h1; pos < h2; pos++) {
        if (used[pos]) {
            f1 = false;
            break;
        }
    }
    for (int pos = h2; pos != h1; pos = (pos + 1) % 60) {
        if (used[pos]) {
            f2 = false;
            break;
        }
    }
    if (f1 || f2) cout << "YES";
    else cout << "NO";
    return 0;
}
