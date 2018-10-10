#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n; int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
    int i = 0, j = 0;
    long long ans = 0, s1 = 0, s3 = 0;
    while (i + j < n) {
        if (s1 > s3) s3 += a[n - ++j];
        else s1 += a[i++];
        if (s1 == s3) ans = s1;
    }
    cout << ans << endl;
}
