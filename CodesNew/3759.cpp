#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int sum = 0;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]);
    }
    int free = n * mx - sum;
    cout << (free > m ? mx : mx + (m - free + n - 1) / n) << " " << mx + m;
    return 0;
}
