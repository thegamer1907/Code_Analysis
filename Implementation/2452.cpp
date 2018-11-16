#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for(int i = 0; i <= n and 5 * i * (i + 1) / 2 + k <= 240; i++) {
        ans = max(ans, i);
    }
    cout << ans << endl;
    return 0;
}
