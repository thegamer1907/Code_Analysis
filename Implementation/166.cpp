#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pb push_back
#define F first
#define S second
#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()

const int INF = 1e18;
const int MAXN = 1e6;

ll power(int a, int n, int MOD = INF) {
    if (n == 0) return 1;
    if (n & 1) {
        return (a * power(a, n - 1, MOD)) % MOD;
    } else {
        int b = power(a, n >> 1, MOD);
        return (b * b) % MOD;
    }
}

ll gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int lg(int a) {
    int ans = 0;
    while (a != 0) {
        ans++;
        a/=2;
    }
    return ans;
}

signed main() {
    cin.tie(0);
    cout.tie(0);
    //freopen("input", "r", stdin);
//-------------------------------------------
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    a = (a - 1) / 2 + 1;
    b = (b - 1) / 2 + 1;
    int cnt = lg(n) - 1;
    while (a != b) {
        ans++;
        a = (a - 1) / 2 + 1;
        b = (b - 1) / 2 + 1;
    }
    if (cnt == ans + 1) {
        cout << "Final!\n";
    } else {
        cout << ans + 1 << '\n';
    }

}