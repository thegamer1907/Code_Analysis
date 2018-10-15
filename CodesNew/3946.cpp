#include <bits/stdc++.h>
using namespace std;
#define N 202020
#define gc getchar
#define pc putchar
#define pb push_back
#define X first
#define Y second
#define Mod(x) (((x) % mod + mod) % mod)
#define all(x) x.begin(), x.end()

typedef pair <int, int> pii;
typedef long long ll;

const int inf = 1e9;
const int mod = 1e9 + 7;
const ll INF = 1e18;
const double ep = 1e-7;
const double pi = 3.14159265358979323846264338327950288L;

template <class T>
inline void chkmax(T &x, T y) {if (x < y) x = y;}

template <class T>
inline void chkmin(T &x, T y) {if (x > y) x = y;}

int n, q;
ll k, cur = 0, a[N];

int main() {
    //freopen("1.in", "r", stdin);
    //freopen("11.out", "w", stdout);
    scanf("%d %d", &n, &q);
    for (int i = 0; i < n; i ++) scanf("%I64d", &a[i]);
    for (int i = 1; i < n; i ++) a[i] += a[i-1];
    while (q --) {
        scanf("%I64d", &k);
        if (cur + k >= a[n-1]) printf("%d\n", n), cur = 0;
        else cur += k, printf("%d\n", a + n - lower_bound(a, a + n, cur + 1));
    }

    return 0;
}

                                                               