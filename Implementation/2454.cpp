#include <bits/stdc++.h>
using namespace std;

int n, rem, mx;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        rem -= a;
        rem += b;
        mx = max(mx, rem);
    }
    cout << mx;
}