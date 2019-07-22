#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n, m, k, in, k1, bal = 0, ans = 0;
    cin >> n >> m >> k;
    k1 = k;
    for (int i = 0; i != m; i++) {
        cin >> in;
        if (in <= k1) {
            bal++;
        }
        else {
            if (bal != 0) {
                ans++;
            }
            k1 += bal;
            bal = 1;
            if (in > k1) {
                k1 += k*((in-k1) / k + ((in-k1)%k != 0));
            }
        }
    }
    if (bal > 0) {
        ans++;
    }
    cout << ans;
    return 0;
}