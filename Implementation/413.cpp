#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k, a[1000], i, k1 = 0;
    cin >> n >> k;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        if (a[i] != 0) {
            if (a[i] >= a[k - 1])
                k1++;
        }
    }
    cout << k1 << endl;
    return 0;
}