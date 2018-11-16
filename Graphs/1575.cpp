#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int c[n];
    int p = 0;

    for(int i = 0; i < n - 1; i++) cin >> c[i];

    while(p < m - 1) p += c[p];

    if(p == m - 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
