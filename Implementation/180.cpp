
#include <iostream>
#include <vector>
#define ll long long
#define pb push_back

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n, a, b;
    cin >> n >> a >> b;
    if (a > b) {
        int c = a;
        a = b;
        b = c;
    }
    if (a <= (n / 2) && b > (n / 2)) {
        cout << "Final!";
        return 0;
    }
    int k = 2;
    int y = 1;
    int ans = 0;
    while (k < n) {
        if ((a + k - 1) / k == (b + k - 1) / k) {
            ans = y;
            break;
        }
        k *= 2;
        ++y;
    }
    cout << ans;
    return 0;
}
