#include <bits/stdc++.h>

#define ll long long
#define sz(x) (ll)(x).size()
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    ll n;
    cin>>n;
    ll a[n][3],sum[3]={0};
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < 3; j++) {
            cin >> a[i][j];
            sum[j] += a[i][j];
        }
    }
    if (sum[0] == sum[1] && sum[1] == sum[2] && sum[2] == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}