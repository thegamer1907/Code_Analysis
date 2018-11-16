#include <bits/stdc++.h>

using namespace std;

const int INF = 1'000'000'007;

int main() {
    ios_base::sync_with_stdio(false);
    long long a, b;
    cin >> a >> b;
    for (int i = 1; true; i++) {
        a *= 3, b *= 2;
        if (a > b) {
            cout << i;
            return 0;
        }
    }
}