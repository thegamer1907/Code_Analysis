#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> PLL;

int main() {
    int n, a, t, maxn = 0, sum = 0;
    cin >> n >> a;
    for (int i = 0; i < n; i++) {
        cin >> t;
        maxn =  max(maxn, t);
        sum += t;
    }
    cout << max(maxn, ((sum + a + n - 1) / n)) << " " << (maxn + a) << endl;
}

