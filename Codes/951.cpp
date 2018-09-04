#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back

using namespace std;

int main() {
#ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#else
//  freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k, ot = 1, l = 0, r = 0, ka = 0, kb = 0;
    string t;
    cin >> n >> k >> t;
    for (int i = 0; i < n; ++i) {
        if (l == r && t[i] == 'a') {
            kb = 0;
            ka = 1;
        } else if (l == r) {
            ka = 0;
            kb = 1;
        }
        if (kb > k) {
            r = i + 1;
            l = i + 1;
            continue;
        }
        while (r + 1 < n && kb < k) {
            ++r;
            if (t[r] == 'a') ++ka;
            else ++kb;
        }
        while (r + 1 < n && t[r + 1] == 'a') {
            ++r;
            ++ka;
        }
        ot = max(ot, r - l + 1);
        if (t[i] == 'a') --ka;
        else --kb;
        ++l;
    }
    l = 0;
    r = 0;
    for (int i = 0; i < n; ++i) {
        if (l == r && t[i] == 'a') {
            kb = 0;
            ka = 1;
        } else if (l == r) {
            ka = 0;
            kb = 1;
        }
        if (ka > k) {
            r = i + 1;
            l = i + 1;
            continue;
        }
        while (r + 1 < n && ka < k) {
            ++r;
            if (t[r] == 'a') ++ka;
            else ++kb;
        }
        while (r + 1 < n && t[r + 1] == 'b') {
            ++r;
            ++kb;
        }
        ot = max(ot, r - l + 1);
        if (t[i] == 'a') --ka;
        else --kb;
        ++l;
    }
    cout << ot;
    return 0;
}
