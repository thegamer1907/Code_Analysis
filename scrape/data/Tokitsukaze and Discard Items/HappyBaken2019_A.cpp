#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 10;


ll n;
ll a[N];
ll m, k;

int main() {
    cin >> n >> m >> k;
    for (int i = 1; i <= m; i++) {
        scanf("%lld", &a[i]);
    }
    ll cur = 1, r = 0, ans = 0;
    while (cur <= m) {
        if (r < a[cur]) {
            r = r + (a[cur] - r + k - 1) / k * k;
        }
        ans++;
        int temp = 0;
        while (cur <= m && a[cur] <= r) {
            cur++;
            temp++;
        }
        r = r + temp;
    }
    printf("%lld\n", ans);
    return 0;
}