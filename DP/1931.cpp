#include <bits/stdc++.h>

using namespace std;

int n, m, x;
set<int> S;

int main () {
    ios::sync_with_stdio(false);
    cin >> n >> m;
    vector<int> a(n + 1);
    for(int i=1;i<=n;i++)
        cin >> a[i];
    vector<int> res(n + 1);
    for(int i=n;i>=1;i--) {
        S.insert(a[i]);
        res[i] = S.size();
    }
    while(m--) {
        cin >> x;
        cout << res[x] << "\n";
    }
    return 0;
}