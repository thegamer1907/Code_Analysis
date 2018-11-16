#include<bits/stdc++.h>
using namespace std;
int n, a, b, x, m, r = -1;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        b += a;
        x += 1 - a * 2;

        r = max(r, x - m);

        m = min(x, m);
    }
    cout << r + b<<endl;;
}
