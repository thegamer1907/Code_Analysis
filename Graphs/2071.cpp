#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if(n > m) cout << n - m;
    else if(n == m) cout << "0";
    else {
        int ans = 0;
        while(m > n) {
            if(m%2==0) {
                m /= 2;
            }
            else m++;
            ans++;
        }
        if(m == n) cout << ans;
        else cout << n - m + ans;
    }

    return 0;
}
