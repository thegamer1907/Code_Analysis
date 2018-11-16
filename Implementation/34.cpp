#pragma GCC optimize("O3")
#define first x
#define second y
#include <bits/stdc++.h>

using namespace std;

enum {MOD0 = 1000000000, MOD7 = 1000000007, MOD9 = 1000000009};
typedef unsigned short ushort;typedef unsigned int uint;typedef long long ll;typedef unsigned long long ull;
#ifndef CrafterKolyan
#define endl '\n'
#endif

int main() {
#ifndef CrafterKolyan
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int n, a, b;
    cin >> n >> a >> b;
    n /= 2;
    --a;
    --b;
    if ((a ^ b) & n) {
        cout << "Final!" << endl;
        return 0;
    }
    for (int i = 8; i >= 0; --i) {
        int cur = 1 << i;
        if ((a ^ b) & cur) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}
