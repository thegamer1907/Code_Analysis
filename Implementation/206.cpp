#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <bitset>
#include <algorithm>
#include <cmath>

using namespace std;

int main () {
    int n, a, b, p, c;
    cin >> n >> a >> b; a--; b--;
    p = 2;
    c = 1;
    while (a/p != b/p) {
        p *= 2; c++;
    }
    if (p == n) { cout << "Final!"; }
    else { cout << c; }
}
