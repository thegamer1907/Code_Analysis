#include <bits/stdc++.h>

#define f first
#define s second
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define ll long long
#define db double
#define ld long double
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define input(a) for (auto& el : a) cin >> el;
#define output(a) cout << '!'; for (auto& el : a) cout << el << ' '; cout << '\n'; //cout.flush();
#define sz(el) int(el.size())
#define sq(a) ((a) * (a))
/**/  /// extra
#define forn(i,n) for (int i = 0; i < n; ++i)
#define rforn(i,n) for (int i = n - 1; i >= 0; --i)
#define bn '\n'
#define vi vector<int>
#define vii vector<vi>
#define vl vector<ll>
#define vll vector<vl>
#define G vector<vector<pii>>
#define GVE vector<vector<edge>>
#define usi unordered_set<int>
#define usp set<pii>
/**/

using namespace std;

const int INF = 1'000'000'017;
const ll LLINF = 1'000'000'000'000'000'017LL;
const ld inf = 1.0 / 0.0;
const ld eps = 1e-9;
const int MOD = 1'000'000'007;

//mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int sum(int a, int b) {
    int res = a + b;
    if (res >= MOD) {
        res -= MOD;
    }
    return res;
}

int ms(int a, int b) {
    int res = a - b;
    if (res < 0) {
        res += MOD;
    }
    return res;
}

void add(int& a, int b) {
    a += b;
    if (a >= MOD) {
        a -= MOD;
    }
}

void ded(int& a, int b) {
    a -= b;
    if (a < 0) {
        a += MOD;
    }
}

int prod(int a, int b) {
    return (ll) a * b % MOD;
}

void mult(int& a, int b) {
    a = (ll) a * b % MOD;
}

int fpow(int a, int p) {
    int x = 1;
    while (p) {
        if (p & 1) {
            mult(x, a);
        }
        mult(a, a);
        p >>= 1;
    }
    return x;
}

const int K = 23, N = 100'005;

ll dp[K][N];
int a[N];

int x = 1;
ll f = 0ll;

int um[N] = {};

int cl = 1, cr = 0;
void make(const int L, const int R) {
    while (cl < L) {
        f -= --um[a[cl]];
        ++cl;
    }
    while (cl > L) {
        f += um[a[--cl]]++;
    }
    while (cr > R) {
        f -= --um[a[cr]];
        --cr;
    }
    while (cr < R) {
        f += um[a[++cr]]++;
    }
}

void rec(int left, int right, const int L, const int R) {
    if (left > right) {
        return;
    }
    int mid = left + right >> 1;
    int opt = L;
    for (int i = L; i <= min(mid, R); ++i) {
        make(i + 1, mid);
        if (dp[x - 1][i] + f < dp[x][mid]) {
            dp[x][mid] = dp[x - 1][i] + f;
            opt = i;
        }
        //cout << f << ' ' << dp[1][1] << ' ' << dp[1][2] << ' ' << dp[2][1] << ' ' << dp[2][2] << '\n';
        //cout << L << ' ' << R << ' ' << f << '\n';
        //cout << f << '\n';
    }
    rec(left, mid - 1, L, opt);
    rec(mid + 1, right, opt, R);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    for (int i = 0; i < K; ++i) {
        for (int j = 0; j < N; ++j) {
            dp[i][j] = LLINF;
        }
    }
    dp[0][0] = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (; x <= k; ++x) {
        rec(1, n, 0, n);
    }
    cout << dp[k][n];
    return 0;
}
