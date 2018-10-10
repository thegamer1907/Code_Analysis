#include <bits/stdc++.h>

#define pb push_back

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), u(n);
    int minu = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        u[i] = a[i]-i;
        minu = min(minu, u[i]);
    }
    int m = ceil((double)minu/n);
    for (int i = 0; i < n; i++) {
        if (u[i] <= m*n) {
            cout << i+1;
            return 0;
        }
    }
}
