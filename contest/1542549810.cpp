#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

const int CMax = 100002;

int v, m, s, t1, t2;

int main() {
    scanf("%d %d %d %d %d", &v, &m, &s, &t1, &t2);

    v *= 5;
    if (m > 0 || s > 0) v++;
    if (s > 0) m++;

    t1 *= 5;
    t2 *= 5;
    if (t1 > t2) swap(t1, t2);

    if (
        ((v > t2 || v < t1) && (m > t2 || m <= t1) && (s > t2 || s < t1)) ||
        ((v < t2 && v > t1) && (m <= t2 && m > t1) && (s < t2 && s > t1))
    ) {
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;
}
