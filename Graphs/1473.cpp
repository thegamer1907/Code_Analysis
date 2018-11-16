#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))

int main() {
#ifndef ONLINE_JUDGE
    freopen("file.in", "r", stdin);
#endif
    int n, t;
    cin >> n >> t;
    vector<int> v(n), vis(n+1);
    for (int i = 1; i < n; i++) {
        cin >> v[i];
    }
    int cur = 1;
    while (cur < t)
        cur += v[cur];

    cout << (cur == t ? "YES" : "NO") << endl;
}
