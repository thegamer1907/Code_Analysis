#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

bool get_bit(int mask, int i) {
    return (mask & (1 << i));
}

int main() {
    #ifdef KEK
    //assert(freopen("input.txt", "r", stdin));
    //assert(freopen("output.txt", "w", stdout));
    #endif // KEK
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int step = 0;
    while (n > 1) {
        step++;
        n /= 2;
    }
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    int ans = 0;
    for (int i = step - 1; i >= 0; i--) {
        if (get_bit(a, i) != get_bit(b, i)) {
            break;
        }
        ans++;
    }
    ans = step - ans;
    if (ans == step) {
        cout << "Final!";
    }
    else
        cout << ans;
    return 0;
}
