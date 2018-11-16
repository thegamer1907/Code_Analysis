/****Author: Barish Namazov****/
#include <bits/stdc++.h>

using namespace std;

/***TEMPLATE***/
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()

#define F first
#define S second
#define pb push_back

#define endl '\n'

const int max4 = 10004;
const int maxx = 100005;
const int max6 = 1000006;
const int lg5 = 17;

const int INF = 2 * 1000000007;
const long long INFLL = 4LL * 1000000000 * 1000000000;

/***************/

int powmod (int a, int b, int mod) {
    int res = 1; a %= mod;
    for (; b; b >>= 1) {
        if (b & 1) {
            res = 1LL * res * a % mod;
        }
        a = 1LL * a * a % mod;
    }
    return res;
}

int gcd (int a, int b) {
    while (b > 0) {
        int t = a % b;
        a = b, b = t;
    }
    return a;
}

int lcm (int a, int b) {
    return (a / gcd (a, b)) * b;
}

int is_prime (int n) {
    if (n <= 1 || n > 3 && (n % 2 == 0 || n % 3 == 0))
        return 0;
    for (int i = 5, t = 2; i * i <= n; i += t, t = 6 - t)
        if (n % i == 0)
            return 0;
    return 1;
}

/******Don't forget to use long long when needed!!******/

const int MOD = 1e9 + 7;

int dp[2005][2005];
int main() {
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base :: sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        dp[1][i] = 1;
    }
    for (int i = 2; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
            for (int d = 1; d * d <= j; d++) {
                if (j % d == 0) {
                    dp[i][j] = (dp[i][j] + dp[i - 1][d]) % MOD;
                    if (d * d < j) {
                        dp[i][j] = (dp[i][j] + dp[i - 1][j / d]) % MOD;
                    }
                }
            }
        }
    }
    int res = 0;
    for (int i = 1; i <= n; i++) {
        res = (res + dp[k][i]) % MOD;
    }
    cout << res << endl;
    return 0;
}
