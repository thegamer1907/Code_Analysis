#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int num = min(a, b);
    int ans = 1;
    for (int i = 1; i <= num; i++) {
        ans *= i;
    }
    cout << ans << endl;
}

