#include <bits/stdc++.h>

#define fr first
#define sc second
#define mk make_pair
#define pb push_back
#define pp pop_back()
#define ll long long
#define ld long double
#define ok puts("OK");
#define sz(s) (int)s.size()
#define all(s) s.begin(), s.end()

using namespace std;

inline ll min(ll a, ll b) {
    return (a > b) ? b : a;
}

inline ll max(ll a, ll b) {
    return (a > b) ? a : b;
}

const int N = 1e5 + 7;
const int inf = 1e9 + 7;
const ll linf = 1e18 + 9;
const double pi = 3.141592653589793238462643;

bool a[N][5];
int ar[N];

int main() {
    int n, k; scanf ("%d %d", &n, &k);
    for (int i = 1; i <= n; i++) {
        int res = 0;
        for (int j = 1; j <= k; j++) {
            bool p; cin >> p;
            if (p) {
                res |= (1 << (k - j));
            }
        }
        ar[res] += 1;
    }
    for (int i = 0; i < 16; i++) {
        for (int j = i + 1; j < 16; j++) {
            if (ar[i] > 0 && ar[j] > 0) {
                if ((i & j) == 0) {
                    puts("YES");
                    return 0;
                }
            }
        }
    }
    if (ar[0]) {
        printf ("YES");
        return 0;
    }
    puts("NO");
}
