#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main () {
    ll n, k;
    int m;
    cin >> n >> m >> k;
    ll A[100005];
    for (int i = 0; i < m; i++) {
        cin >> A[i];
    }
    ll ans = 0;
    ll p = k;
    int cnt = 0;
    for (int i = 0; i < m;) {
        if (A[i] <= p) {
            i++;
            cnt++;
        }
        else {
            if (cnt == 0) {
                p += ceil(1.0 * (A[i] - p) / k) * k ;

            }
            else {
                p += cnt;
                cnt = 0;
                ans++;

            }
            //ans++;

        }

    }
    ans++;
    cout << ans << endl;

    return 0;
}