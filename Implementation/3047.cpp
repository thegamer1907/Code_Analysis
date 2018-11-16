#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int a, b;
    cin >> a >> b;
    int to = min(a, b);
    long long ans = 1;
    for (int i = 1; i <= to; i++) {
        ans *= i;
    }
    cout << ans << endl;
}
