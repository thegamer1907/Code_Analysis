#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;

int main() {
    ios_base ::sync_with_stdio(0); cin.tie(0);
    int n, h;
    cin >> n >> h;
    int res = n;
    for(int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        res += x > h;
    }
    cout << res;
}
