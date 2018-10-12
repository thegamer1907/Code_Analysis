#include<bits/stdc++.h>
using namespace std;

int n, m, ma, mi;
int a[105];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);

    int sum = 0;
    for (int i=0; i<n-1; i++) {
        sum += (a[n-1]-a[i]);
    }

    ma = a[n-1]+m;
    mi = a[n-1];
    if (m > sum) {
        m -= sum;
        if (m%n) {
            mi += m/n + 1;
        } else {
            mi += m/n;
        }
    }


    cout << mi << " " << ma;
    return 0;
}