#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
    int n, q;
    cin >> n >> q;
    vector<Long> A(n), PS(n);
    for(int i = 0; i < n; i++) {
        cin >> A[i];
        PS[i] = A[i];
        if (i) PS[i] = PS[i-1] + A[i];
    }
    Long cur = 0LL;
    while(q--) {;
        Long D;
        cin >> D;
        cur += D;
        //cout << "Read D " << D << " Cur " << cur << endl;
        auto pos = upper_bound(PS.begin(), PS.end(),cur) - PS.begin();
        if (pos >= n) {
            cout << n << endl;
            cur = 0LL;
        } else {
            //cout << "pos " << pos << endl;
            cout << n - (pos) << endl;
        }
    }
    return 0;
}