#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    a = min(a, b);
    long long ans = 1;
    while (a > 1) {
        ans *= a;
        a--;
    }
    cout << ans << endl;
}
