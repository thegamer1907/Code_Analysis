#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned uint;
typedef long double ld;
typedef unsigned char uchar;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);

    int n, a, b;
    cin >> n >> a >> b;
    int i = 0;
    while (n > 2) {
        i++;
        if (a + 1 >> 1 == b + 1 >> 1) {
            cout << i;
            return 0;
        }
        n >>= 1;
        a = a + 1 >> 1;
        b = b + 1 >> 1;
    }

    cout << "Final!";

    return 0;
}