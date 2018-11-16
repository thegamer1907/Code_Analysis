#include <iostream>

using namespace std;
int main() {
    int n, a, b, ans = 0;
    cin >> n >> a >> b, --a, --b;
    while (++ans && b / 2 != a / 2) n >>= 1, a >>= 1, b >>= 1;
    if (n == 2) cout << "Final!";
    else cout << ans;
    return 0;
}