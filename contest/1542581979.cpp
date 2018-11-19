#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second

using namespace std;

typedef long long unsigned ll;
typedef long double ld;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

const ld eps = 1e-12;
const double PI = 3.14159265359;
const int INF = 1e9 + 41;
const ll LINF = 1e18 + 41;
const int N = 1000 * 100;

ll myRand() {
    ll q = rand();
    return (q << 16) ^ rand();
}

int myabs(int x) {
    return (x < 0 ? -x : x);
}

void init() {
    #ifdef KEK
        freopen("a.in", "r", stdin);
        //freopen("a.out", "w", stdout);
    #else
        ///freopen("input.txt", "r", stdin);
        ///freopen("output.txt", "w", stdout);
    #endif // HARD
    cout.precision(2);
}

void win() {
    cout << "YES";
    exit(0);
}

int a[100100];

void solve() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int q = 0;
        for (int j = 0; j < k; j++) {
            int x;
            cin >> x;
            q = q * 2 + x;
        }
        a[q]++;
    }
    if (a[0])
        win();
    for (int i = 1; i < (1 << k); i++)
    for (int j = 1; j < (1 << k); j++) {
        bool ok = true;
        for (int q = 0; q < k; q++)
            if ((i & (1 << q)) != 0 && (j & (1 << q)) != 0)
                ok = false;
        if (ok && a[i] && a[j]) win();
    }
    cout << "NO";
}

int main() {
    init();
    solve();
    return 0;
}
