#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m, s = 0, mx = 0;

    cin >> n >> m;

    for(int i = 0;i < n;i++) {

        int x;
        cin >> x;
        mx = max(x, mx);

        s += x;
    }
    s += m;

    if(s % n == 0) s = (s / n);
    else  s = (s / n) + 1;

    cout << max(mx, s) << ' ' << mx + m<< endl;
}
