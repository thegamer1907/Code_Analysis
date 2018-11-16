#include <bits/stdc++.h>

#define first F
#define second S

using namespace std;

using ll = long long;
using ld = long double;

int main() {
    ios_base::sync_with_stdio(false);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = 0;
    while (a != 0 && c != 0 && d != 0) {
        sum += 256;
        --a;
        --c;
        --d;
    }
    while (a != 0 && b != 0) {
        sum += 32;
        --a;
        --b;
    }
    cout << sum << endl;
    return 0;
}