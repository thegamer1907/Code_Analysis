#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int res = 0;
    while(n <= m) {
        n *= 3;
        m *= 2;
        res++;
    }
    cout << res << '\n';
    return 0;
}



































