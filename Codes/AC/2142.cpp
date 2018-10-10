#include <iostream>
#include <vector>
#include <set>
#include <fstream>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    int i1 = -1;
    int i2 = n;
    ll sum1 = 0;
    ll sum2 = 0;
    ll ans = 0;
    while (i1 < i2) {
        if (sum1 < sum2) sum1 += a[++i1];
        else if (sum1 > sum2) sum2 += a[--i2];
        else {
            ans = sum1;
            sum1 += a[++i1];
            sum2 += a[--i2];
        }
    }
    cout << ans << endl;
    return 0;
}