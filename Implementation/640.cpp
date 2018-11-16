#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
using namespace std;
const int N = 1e3 + 1;
int n, k;
int a[N];
int ans;
int main () {
    cin >> n >> k;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a, a+n, greater<int> ());
    for (int i=0; i<n; i++) {
        if (a[i] >= a[k-1] && a[i] > 0)
            ans++;
    }
    cout << ans;
}

