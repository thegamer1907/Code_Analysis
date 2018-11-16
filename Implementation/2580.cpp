#include<bits/stdc++.h>

using namespace std;

int n, a, res, h;

int main() {
    cin >> n >> h;
    res = n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        res += (a > h);
    }
    cout << res << endl;
}