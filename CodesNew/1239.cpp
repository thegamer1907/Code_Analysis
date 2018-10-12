#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = INT_MAX;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        int x = (tmp - i) / n;
        if (x >= 0 and (tmp - i) > 0 and (tmp - i) % n != 0) x++;
        //cout << i << " " << x << "\n";
        ans = min(ans, x * n + i);
    }
    cout << ans % n + 1;
    return 0;
}