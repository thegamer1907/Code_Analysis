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

int n, k, d[2100][2100];
ll ans;

int main() {
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        d[1][i] = 1;
    for (int i = 2; i <= k; i++) {
        for (int x = 1; x <= n; x++) {
            for (int j = x; j <= n; j += x) {
                d[i][j] += d[i - 1][x];
                if (d[i][j] >= 1e9 + 7) d[i][j] -= 1e9 + 7;
            }
        }
    }
    for (int i = 1; i <= n; i++)
        ans += d[k][i];
    cout << ans % int(1e9 + 7);

}
