#include <bits/stdc++.h>

#define first F
#define second S

using namespace std;

using ll = long long;
using ld = long double;

int main() {
    ios_base::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    int k = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        ++k;
    }
    cout << k << endl;
    return 0;
}