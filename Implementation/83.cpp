#include <bits/stdc++.h>

#define pii pair<int, int>
#define f first
#define s second
#define ll long long
#define pll pair<ll, ll>
#define all(a) a.begin(), a.end()
#define sz(a) int(a.size())

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b;
    cin >> n >> a >> b;
    int n1 = n;
    int need = 1;
    while (n1 != 1) {
        n1 /= 2;
        ++need;
    }
    int ans = 1;
    while (a != b) {
        b = (b + 1) / 2;
        a = (a + 1) / 2;
        ++ans;
    }
    ans -= 1;
    if (ans == need - 1) {
        cout << "Final!";
    }
    else {
        cout << ans;
    }
    return 0;
}
