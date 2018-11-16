#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <map>
#include <cstring>
#include <numeric>
#include <algorithm>
#include <set>

using namespace std;
typedef long long ll;

#define sz int(1e6)
#define F first
#define S second
#define pb push_back

int n, m, a[sz], b[sz], c[sz];

int main() {

    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];
    sort(b + 1, b + 1 + m);
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0) a[i] = b[m--];
        c[i] = a[i];
    }
    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++) {
        if (a[i] != c[i]) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}
