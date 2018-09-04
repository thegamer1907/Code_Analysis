#include <bits/stdc++.h>
using namespace std;
map <long long, long long> m1, m2;
int main () {
    int n, k, a1;
    long long ans = 0;
    cin >> n >> k;
    for (int i= 0; i < n; ++i) {
        cin >> a1;
        if (a1 % (k * k) == 0 && m2.count(a1)) {
            ans += m2[a1];
        }
    
        if ((long long)abs(a1) * abs(k) >= ((long long)1 << 32))
            continue; 
        if (a1 % k == 0 && m1.count(a1)) {
            if (m2.count(a1 * k))
                m2[a1 * k] += m1[a1];
            else
                m2[a1 * k] = m1[a1];
        }
        if (m1.count(a1 * k))
            ++m1[a1 * k];
        else
            m1[a1 * k] = 1;
    }
    cout << ans;
    
    return 0;
}